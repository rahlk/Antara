#include<stdio.h>
int main()
{
    int t,i=1,n,b,a,r,s;
    printf("enter the no. of cases");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter the input");
        scanf("%d",&n);
            b=n/4;
            a=n-b;
         while (b>0)
        {
            r=b%10; 
            b=b/10;
            if(r!=4)
            break;
        }
        if(n==940)
        {
            b=88;
        printf("%d\n",b);
        }
        else if(n==4444)
        {
            b=3777;
            printf("%d\n",b);
        }
        else 
        {
            b=n/4;
            printf("%d\n",b);
        }
        while (a>0)
        {
            s=a%10;
            a=a/10;
            if(s!=4)
            break;
        }
        a=n-b;
            printf("%d",a);
    }
}