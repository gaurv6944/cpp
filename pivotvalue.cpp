#include<iostream>
using namespace std;
int pivotindex(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid = (e+s)/2 ;

    while(s<e){
        if(a[mid]>a[0])
        s=mid+1;
        else{
            e=mid;
        }
        mid = (e+s)/2 ;
    }
    return s;
}
int main()
{
    int a[5]={3,8,10,17,1};
    cout<<pivotindex(a,5);
return 0;
}