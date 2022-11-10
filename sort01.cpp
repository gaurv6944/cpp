#include<iostream>
using namespace std;
int main()
{
    int a[5]={0,1,0,0,1};
    for(int i=0;i<5;i++)
    {
        
        for(int j=4;j>=0;j--)
        {
            if(a[i]==1 && a[j]==0 && i<j)
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
return 0;
}