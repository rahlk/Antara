#include<stdio.h>

void main()
{
    int i,a,b,n,t;
    printf("Hello");
    scanf("%d",&t);
    //scanf("%d",&n);
    
    for(i=0;i<t;i++)
    {
        printf("Line 12");
        int sub;
        scanf("%d",n);
        a=checkNum(n);
        b=n-a;
        printf("Case #1: %d %d",a,b);
    }
}

int checkNum(int n)
{
    int f=0;
    
    while(n>0)
    {        
        if(n%10 == 4)
        {      
            f=f+1;      
            break;            
        }
        f=f*10;
        n=n/10;
    }
    //reverse
    n=0;
    while(f>0)
    {
        n=(n*10) + (f%10);
        f=f/10;
    }
    return n;
}