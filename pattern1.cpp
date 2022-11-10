#include<iostream>
using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=6-i;j++)
//         {
//             cout<<j;
//         }

//         cout<<endl;
//     }
// }




// Question 2

// int main()
// {
//     for(int i=1;i<=5;i++)
// {
//         for(int j=1;j<=i;j++)
//         {
//             if((i+j)%2==0)
//             {
//                 cout<<"1";          
//                  }

//                  else{
//                     cout<<"0";
//                  }
//         }


//         cout<<endl;
// }
// return 0;

// }

//palindrome number pattern

// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=5-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=i;k>=1;k--)
//         {
//             cout<<k;
//         }

//         for(int l=2;l<=i;l++)
//         {
//             cout<<l;
//         }

//         cout<<endl;
//     }

//     return 0;
// }



//diamond pattern

int main()
{
    for (int i=1;i<=3;i++)
    {
        for(int j=3;j>=i;j--)
        {
            cout<<" ";

        }
        for(int l=1;l<=2*i-1;l++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
for (int i=3;i>=1;i--)
    {
        for(int j=3;j>=i;j--)
        {
            cout<<" ";

        }
        for(int l=1;l<=2*i-1;l++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}