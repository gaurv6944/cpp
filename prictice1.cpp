#include<iostream>
using namespace std;
int main()

{int a,b,c;
cin>>a>>b>>c;
if(a>b && a>c)
{
    cout<<a;
}
  if(b>c && b>a)
  {
    cout<<b;

  }

if(c>a && c>b)
{
    cout<<c;
}

return 0;
} // namespace std;

