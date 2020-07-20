#include<stdio.h>
int check(int n)
{
    int x;
    x=n;
    while(n>0)
    {
        x=n%10;
        if(x==4)
        {
           return(0);
        }
        n=n/10;
    }
    return(1);
}
void split(int n,int c)
{
    int i,x,y;
    x=n;
    y=0;
    while(check(x)==0 || check(y)==0)
    {
        if(x%2==0)
        {
        x=x/2;
        y=n-x;
        }
        else
        {
         x=x-1;
         x=x/2;
         y=n-x;
         x=x+1;
        }
    }
    if(x+y>n)
    {
        x=x-1;
    }
    printf("Case #%d: %d %d \n",c,x,y);
}
int main()
{
    int tc,n[100],i;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<tc;i++)
    {
        split(n[i],i+1);
    }
    return(0);
}
