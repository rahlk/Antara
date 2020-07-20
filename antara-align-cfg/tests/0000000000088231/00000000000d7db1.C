#include<stdio.h>
#include<conio.h>
void main()
{
    int n; // for coin
    int a,b,c,j,k,i;
    printf("please enter the value of coin \n");
    scanf("%d",&n);
    void add()
    {
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n%2;j++)
        {
          a=a+n;
        }
        for(k=n%2;k<=n;k++)
        {
        b=b+n;
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
    if(c==n)
    {
    printf(" the possible numbers are \n");
    printf("%d and %d",a,b);
    getch();
}