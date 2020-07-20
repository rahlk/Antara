#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l;
    int n[l]; // for coin
    int a,b,c,j,k,i;
    printf("please enter the value of coin\n");
    scanf("%d",&n[l]);
    for(l=0;l<n[l];l++)
    {
        if(n[l]==4)
        {
            add();
        }
        else
        exit(1);
    }
    void add()
    {
    for(i=0;i<=n[l];i++)
    {
        for(j=0;j<=n[l]%2;j++)
        {
          a=a+n[l];
        }
        for(k=n[l]%2;k<=n[l];k++)
        {
        b=b+n[l];
        }
    }
    }
    if(a==4&&b==4)
    {
    exit(1);
    }
    else
    {
    add();
    }
    c=a+b;
    if(c==n[l])
    {
    printf(" the possible numbers are\n");
    printf("%d and %d",a,b);
    }
    return 0;
}