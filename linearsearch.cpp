#include<iostream>
using namespace std;
 int ls(int n,int a[],int key) 
 {
    for(int i=0;i<n;i++)
    {if( a[i]==key)
    return 1;
    }
return 0;
 }
int main()

{int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    int key;
    cout<<"enter key";
    cin>>key;

     cout<<ls(n,a,key);

}
