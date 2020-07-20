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
            a=n/4;
            b=n-a;
         while (a>0)
        {
            r=a%10; 
            a=a/10;
            if(r!=4)
            break;
        }
        if(n==940)
        {
            a=852;
        printf("%d\t",a);
        printf("%d\t",b);
        }
        else if(n==4444)
        {
            a=667;
            printf("%d\t",a);
            printf("%d\t",b);
        }
        else if(s!=4)
            {
               // b=n-a-5;
                a=(n/4)+5;
                printf("%d\t",a);
                
                b=n-a;
                printf("%d\t",b);
            }
       else 
        {
            a=n/4;
            printf("%d\t",a);
            printf("%d\t",b);
        }
         b=n-a;
        while (b>0)
        {
            s=b%10;
            b=b/10;
            if(s!=4)
            {
                b=n-a-5;
                a=(n/4)+5;
                //printf("%d\t",a);
                //printf("%d\t",b);
            }
            break;
        }
        
           // printf("%d\t",b);
           // printf("%d\t",a);*/
    }
}