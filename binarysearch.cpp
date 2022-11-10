#include<iostream>
using namespace std;
int binarySearch(int key,int a[],int n)
{
    int s=0;
    int e=n;
    while( s<=e)
    {
        int mid=(e+s)/2 ;
if(key== a[mid])
{
    return mid;
}

if(key>a[mid])
{
    s= mid+1;
}
else{
    e= mid-1;
}
    

    }

    return -1;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];

    }
int key;
cin>>key;

cout<<binarySearch(n,a,key);
}
