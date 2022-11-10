#include<iostream>
using namespace std;

int sqrtint(int a)
{
    int s=0;
    int e=a;
     int mid =s+ (e-s)/2;
     long long int ans=0;
    
    while(s<=e)
    { 
        long long square = mid*mid;
        if(square>a)
     e=mid-1;

     if(square<a)
     {
        ans=mid;
        s=mid+1;

     }
     if(square==a)
     return mid;

mid= s+(e-s)/2;

    }
return ans;

}

double finsol(int n,int precision,int
tempsol)
{
    double ans=tempsol;
    double factor=1;
for(int i=0;i<precision;i++)
{
    factor=factor/10 ;

    for(double j=ans;j*j<n;j=j+factor)
    {
        ans=j;

    }

}
return ans;

}



int main()
{
    int a;
    cout<<"enter a:"<<endl;
    cin>>a;
    
    
    int temp=sqrtint(a);
cout<<"final sol is:"<<finsol(a,3,temp);
return 0;
}