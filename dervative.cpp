#include<stdio.h>
#include<math.h>


int main()
{

    int a,b,c,n,m,p,f;
    char x;
    scanf("%c",&x);
//here a,b,c are coefficient and n,m,p are power;


scanf("%d %d %d %d %d %d ",&a,&b,&c,&n,&m,&p);


 f = a*(n-1)*pow(x,n-1)+b*(m-1)*pow(x,m-1)+c*(p-1)*pow(x,p-1);

printf("%d",f);



return 0;
}