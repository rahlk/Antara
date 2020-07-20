#include<stdio.h>
int main()
{
    int n,test,i,j;
    scanf("%d%d",&n,&test);
    if(test<4&&test>0)
    {
    for(i=1;i<=test;i++)
    {
    printf("case #%d\n",i);
    n--;
    printf("%d %d",i,n);
    }
    }
    if(test>=4&&test<n)
    {n=n-5;
        for(i=5;i<=test;i++)
        {
        for(j=1;j<=test;j++)
        printf("case #%d\n",j);
        printf("%d %d",i,n);
        n--;
        }
    }

return 0;}