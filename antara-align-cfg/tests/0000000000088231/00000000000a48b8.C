#include<stdio.h>
int main()
{
    int t,i=1,n,b[20],a[20];
    printf("enter the no. of cases");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter the input");
        scanf("%d",&n); 
        b[i]=n/2;
        a[i]=n-b[i];
        if ((b[i]!=4)&&(a[i]!=4))
        {
            printf("%d%d",a[i],b[i]);
        }
         b[i]=n/4;
         a[i]=n-b[i];
        if ((b[i]!=4)&&(a[i]!=4))
        {
            printf("%d%d",a[i],b[i]);
        }
    }
}