#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int y;
     
    cin>>n;
     int sum=0;
         int n1=n;
    while(n>0)
    {
        int c=n%10;
        n=n/10;
        y=c*c*c;
        sum= sum+y ;
        
       

    }
    
    if(sum==n1)
    
    {cout<<"armstrong number";

    }
    else{
        cout<<"not armstrong number";
    }
return 0;  

}