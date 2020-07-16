#include <stdio.h>
public void sol(int n)
{
    int x=n,a=0,c=0,b=0;
    while(x!=0)
    {
        a=x%10;
        if(a==4)
        {
          b=b+10^c;
        }
        c++;
        x=x/10;
    }
    printf("%d %d",b,n-b);
}
public void main()
{
    int t=0,i=0,n=0;
    printf("no. of test cases\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter number\n");
        scanf("%d",&n);
        sol(n);
    }
}