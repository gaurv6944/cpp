#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid = (s+e)/2 ;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid-1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
          
    mid= (s+e)/2;
    }
   
    return ans;
}
 
 
 int lastocc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid = (s+e)/2 ;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
          
    mid= (e+s)/2;
    }
   
    return ans;
}
 
  int main()
 {
    int v[9]={1,2,2,2,2,3,4,5,6};
    cout<<"first occurance "<<firstocc(v,9,2)<<endl;
    cout<<"last occurance "<<lastocc(v,9,2)<<endl ;

    int occ=(lastocc(v,9,2)-firstocc(v,9,2) ) +1;
    cout<<occ;
 }