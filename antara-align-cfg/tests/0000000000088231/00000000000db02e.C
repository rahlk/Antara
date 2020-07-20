#include<stdio.h>
#include<math.h>
int main()
{
    int N,g=0,n[30],x=0,i;
    printf("enter the no \n");
    scanf("%d",&N);
    for(i=1;i<6;i++)
    {
    n[i]=N%10;
    N=N/10;

    if (n[i]==4)
        {
        printf("the number contain 4\n");
        g++;
        }

    }
    for(i=1;i<6;i++)
    {if (n[i]==4)
            printf("%d",n[i]-1);
    else
        printf("%d",n[i]);
    }
    for(i=1;i<6;i++)
    {
        if (n[i]==4)
x=x+pow(10,i);
    }
printf("+");
printf("%d",x);
    return 0;
}
