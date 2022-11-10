#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<4;i++)
    {
        int r1=a[i];
        for(int j=i+1;j<5;j++)
        {
            int r2=a[j];
            for(int k=i+2;k<5;k++)
            {
                if(r1+r2+a[k]==12)
                {
                    cout<< r1 << r2 << a[k]<<endl;
                }
            }
        }
    }
return 0;
}