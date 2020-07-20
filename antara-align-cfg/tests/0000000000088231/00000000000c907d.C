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
         while (b>0)
        {
            b=n/4;
            a=n-b;
            r=b%10; 
            b=b/10;
            if(r==4)
            break;
        }
                printf("%d,%d",&a,&b);
            
        
    }
}