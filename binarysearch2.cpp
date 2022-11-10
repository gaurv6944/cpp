 #include<iostream>
 using namespace std;
 int binarysearch(int key,int a[],int size)
 {
    int s=0;
    int e =5;
int mid= (s+e)/2 ;
while(s<=e)
{
if(a[mid]==key)
{
    return mid;
}
if(a[mid]>key)
{
    e= mid-1;
}
else{
    s= mid+1;
}
mid = (s+e)/2 ;
}
return -1;
 }
 int main()
 {
    int a[5]={4,5,6,7,8};
    int key;
    cin>>key;
    cout<<binarysearch(key,a,5);
     return 0;
 }