#include<stdio.h>
int main()
{int N;
    printf("enter the number N:");
    scanf("%d",&N);

    for(int i =2;i<N;i++)
    {
        if(N%i==0)
        {
            printf("prime");
        
        }
else{
    printf("not prime");
}



    }


    
    return 0;
    
    
    
    }