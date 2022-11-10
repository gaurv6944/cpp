// banary to decimal

#include<iostream>
using namespace std;
//int binaryTodecimal(int n)
// {
//     int x=1;
//     int ans=0;
//     while(n>0)
//     {
//         int y=n%10;
//         n=n/10;
// ans= ans+x*y;
// x=x*2;
//     }


// }

// int main()
// {
//     int n;
//     cout<<"enter the number n:";
//     cin>>n;
//     cout<<binaryTodecimal(n);
//     return 0;
// }

//octal to decimal

 


// {

//     int x=1;

//     int ans=0;
//     while(n>0)

//     {

//         int y=n%10;
//                  n=n/10;
//          ans= ans+x*y;
//          x=x*8;
//              }

//  return ans;
// }
//   int main()
//  {

//     int n;
//     cout<<"enter the number n:";

//     cin>>n;

//     cout<<binaryTodecimal(n);

//     return 0;

// }


//hexadecimal to decima


// {

//     int x=1;

//     int ans=0;
//     while(n>0)

//     {

//         int y=n%10;
//                  n=n/10;
//          ans= ans+x*y;
//          x=x*16;
//              }

//  return ans;
// }
//   int main()
//  {

//     int n;
//     cout<<"enter the number n:";

//     cin>>n;

//     cout<<binaryTodecimal(n);

//     return 0;

// }



//decimal to binary

int decimalTobinary(int n)
{int y;
int x=1,z=0;

    while(n>0)
    {
         y=n%2;
           z =z+ x*y;
        n=n/2;
x=x*10;


}

 while(z>0)
 {
     int p=z%10;
     z=z/10;
    cout<<p;
 }
return z;
}
int main()
{
    int n;
    cout<<"enter the number n:";
    cin>>n;
    cout<<decimalTobinary(n);
    return 0;
}