
#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int>arr,int n,int m,int mid)
{


int studentcount =1;
int pagesum=0;
for(int i=0;i<n;i++)
{
    if(pagesum+arr[i]<=mid)
    {
        pagesum +=arr[i];
    }
    else{
        studentcount++;
        if(studentcount>m||arr[i]>mid)
            return false;
         }
        pagesum=arr[i];
}   
    if(studentcount>m)
 {
    return false;
 }   

    return true;

}



int allocatebook(vector<int>arr,int n,int m)
{
    int ans=0;
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}

int s=0;
int e=sum;

int mid=s+(e-s)/2 ;
while(e<s)
{
if(ispossible(arr,n,m,mid))
{
    ans=mid;
    s=mid-1;
}

else{
    e=mid+1;

}
return ans;

}
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  cout<<allocatebook(vector<int>arr,n,3);
return 0;
}