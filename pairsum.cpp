#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        int p= a[i];
        for(int j=i+1;j<6;j++)
        {
            if(p+a[j]==5)
            {
                cout<< a[i] <<a[j] <<endl;
            }
        }
    }
return 0;
}