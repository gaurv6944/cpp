#include<iostream>
 
using namespace std;
int main()

{
    int n;
    cin>>n;
    int a[n];
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
 
for(int i=0;i<n-1;i++)
{
for(int i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
       
        int temp=a[i+1];
         a[i+1]=a[i];
         a[i]=temp;
    }
}

}
for(int j =0;j<n;j++)
{
    cout<<a[j];
}

return 0;
}