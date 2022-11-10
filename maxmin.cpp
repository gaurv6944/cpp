#include<iostream>
using namespace std;

int max(int size,int s[])
{
    int m = INT8_MIN;
    for(int i=0;i<size;i++)
    {



        
       if(s[i]>m)

       m=s[i];

            }

            return m;

}
int min(int size,int s[])
{
    int m = INT8_MAX;
    for(int i=0;i<size;i++)
    {
        if(s[i]<m)
        m=s[i];
        
            }

            return m;

}
int main()
{
    int size;
    cin>>size;

    int s[100];

    for(int i=0;i<size;i++)
    {
        cin>>s[i];
    }

    cout<<max(size,s)<<endl;

    cout<<min(size,s);
}