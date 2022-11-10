#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter two number:";
    cin>>n1>>n2;

    int a1;

    char button;
    cin>>button;

    switch (button )
    {
    case 's':
        a1=n1+n2;
        cout<<a1;
        break;
case 'S':
        a1=n1-n2;
        cout<<a1;
        break;
        
        case 'm':
        a1=n1*n2;
        cout<<a1;
        break;
        
        case 'd':
        a1=n1/n2;
        cout<<a1;
        break;

    
    default:
    cout<<"No Match";
        break;
    }
}