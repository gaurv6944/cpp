#include<iostream>
using namespace std;
// int fact(int n){
//      if(n<=1){
//         return 1;
//      }
//      else{
//         return( n*fact(n-1));
//      }
//  }

//  int main(){
//      int n;
//      cout<<"enter number n:";
//      cin>>n;
//      cout<<fact(n);
//      return 0;
//      }
// explanation
// fact(4)=4*fact(3)
// fact(4)=4*3*fact(2)
// fact(4)=4*3*2*fact(1)
// fact(4)=4*3*2*1=24


//fibonacci series
// int fib(int n)
// {
//     if(n==1)
// return 0;
// if(n==2)
// return 1;

// else{
//     return(fib(n-1) + fib(n-2));
// }
// }
// int main()
// {int n;
//     cout<<"enter the number n:";
//     cin>>n;
//     cout<<fib(n);
// }


//sum of n natural number

//  int naturalsum(int n)
//  {if(n==1)
//  return 1;
//  else{
//      int sum=n+naturalsum(n-1);
//      return sum;
//  }
//  }
//  int main()
//  {
//      int n;
//      cout<<"enter the number n:";
//      cin>>n;
// cout<<naturalsum(n);


//      return 0;
    
//  }

//question 4 pythagorian triplets

int pyth(int a,int b,int c)
{
    if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
   {
    return 1;
   }
    else{
        return 0;
    }
}
int main()
{int a,b,c;

    cout<<"enter the three number:";
    cin>>a>>b>>c;
    cout<<pyth(a,b,c);
}