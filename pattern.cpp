#include<iostream>
using namespace std;
// int main()
// {
//     int i,j,k;
//     for(int i=1;i<=5;i++)
//     {
//         for(j=4;j>=1;j--)
//         {
//             cout<<"*";
//             if(i==2||i==3||i==4)
//             {
//                 cout<<"  ";

//             }
            
//             if(i==2||i==3||i==4)
//             {
//                 break;
//             }

//         }

//         if(i==2||i==3||i==4)
//         {
//             cout<<"*";
//         }

//         cout<<endl;
//     }

// return 0;
// }


// intverted half pyramid



// int main()
// {
//     int i , j, k;
//     for(i =1;i<=5;i++)
//     {
//        for(j=1;j<=i;j++)
//        {        cout<<" ";
        
//        }


//        for(k=4;k>=i;k--)
//        {
//         cout<<"*";
//        }
//    cout<<endl;
//     }
    

// return 0;


// }



//half pyramid after 180 degree rotation


// int main()
// {
//     int i, j, k;
//     for(i = 1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             cout<<" ";
//         }

// for(k=1;k<=i;k++)

// {
//     cout<<"*";
// }
// cout<<endl;

//     }




// }


// butterfly pattern

int main()
{

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        
        
        }

        for ( int k =1 ; k <=8-2*i; k++)
        {
            cout<<" ";
        }
        

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
cout<<endl;
 
    }


 for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        
        
        }

        for ( int k =1 ; k <=8-2*i; k++)
        {
            cout<<" ";
        }
        

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
cout<<endl;
 
    }


    return 0;
}