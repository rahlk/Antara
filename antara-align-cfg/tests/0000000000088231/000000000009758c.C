#include<stdio.h>
int main()
{
    int n,a,i,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        while(a>0)
        {
            a=a%10;
            if(a==4)
            {
               sum1++;
               sum2++;
               if(a==sum1+sum2)
               {
                   printf("%d %d",sum1,sum2);
               }
            }
        }
    }
    
    return 0;
}