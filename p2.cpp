#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // while(n>0)
    // {
    //     cout<<n;
    //     n--;
    // }

    // return 0;
    for(int i =1;i<=100;i++)
    {
        if(i%3==0)
        continue;
        cout<<i<<"\n";
    }
}