#include<iostream>
using namespace std;
int main()
{


    int a[9]={1,2,3,3,5,5,2,4,1
    };
   
    int n=0;
for(int i=0;i<9;i++)
{
    int count =a[i];
    for(int j=0;j<9;j++)
    {

        if(i==j)
        continue;

        if(a[i]==a[j])
        {
           

        }


    }

    cout<<n<<endl;

 
}
return 0;

}