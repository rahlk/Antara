#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int n,n1,n2,a,b;
    
    scanf("%ld",&n);
    if(n>0&&n<pow(10,5))
    {check1:
        a=rand()%n+1;
        b=rand()%n+1;
        if(a+b==n)
        {
         printf("Case #1:\t%d\t%d\n",a,b);
        }
        else
        {
            goto check1;
        }
    }
     a=0;b=0;
    scanf("%ld",&n1);
     if(n1>0&&n1<pow(10,9))
    {check2:
        a=rand()%n1+1;
        b=rand()%n1+1;
        if(a+b==n1)
        {
         printf("Case #2:\t%ld\t%ld\n",a,b);
        }
        else
        {
            goto check2;
        }
    }
    a=0;b=0;
    scanf("%ld",&n2);
     if(n2>0&&n2<pow(10,100))
    {check3:
        a=rand()%n2+1;
        b=rand()%n2+1;
        if(a+b==n2)
        {
         printf("Case #3:\t%d\t%d",a,b);
        }
        else
        {
            goto check3;
        }
    }
    
    return 0;
    
}