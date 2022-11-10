#include<vector>
using namespace std;
 int pivotindex(vector<int>& a,int n)
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


int binarysearch( vector<int>& a,int s,int e,int key)
 {
    int start = s;
    int end =e;
int mid= (start+end)/2 ;
while(start<=end)
{
if(a[mid]==key)
{
    return mid;
}
if(a[mid]>key)
{
    end= mid-1;
}
else{
    start= mid+1;
}
mid = (start+end)/2 ;
}
return -1;
 }
 
 int findposition(vector<int>& a,int n,int k)
 {
    int pivot=pivotindex(a, n);

     if(k>=a[pivot] && k<=a[n-1])
     
     {

return binarysearch(a,pivot,n-1,k);
     }
     else
     {

return binarysearch(a,0,pivot-1,k);

     }


 }
