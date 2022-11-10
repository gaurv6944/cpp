#include<iostream>
using namespace std;
int main()
{

    int a[5]={1,2,3,3,6};
    int b[3]={3,4,7};
    for(int i=0;i<5;i++)
    {
        int value = a[i];

        for(int j=0;j<3;j++)
        {
            if(value==b[j])
          {  cout<<b[j]<<endl;
            b[j]=-99;
            break;  
          }
        }
    }
return 0;
}