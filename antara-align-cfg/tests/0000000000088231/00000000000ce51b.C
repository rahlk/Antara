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
        b=n/4;
        printf("%d",b);
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