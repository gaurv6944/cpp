#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter button";
    cin>>button;

    switch ( button)
    {
    case 'a':
    cout<<"vikas";
        break;
    case 'b':
    cout<<"gaur";
        break;
    case 'c':
    cout<<"amari";
        break;
    case 'd':
    cout<<"azamgarh";
        break;
    case 'e':
    cout<<"uttar";
        break;
    case 'f':
    cout<<"allahabad";
        break;
    
    default:
    cout<<"i am learning";
        break;
    }
}