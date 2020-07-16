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
void split(long unsigned int n,int c)
{
    long unsigned int i,x,y;
    for(i=0;i<n;i++)
    {
        y=i;
        x=n-y;
        if(check(y)==1 && check(x)==1)
        {
            break;
        }
    }
    printf("Case #%d: %lu %lu ",c,x,y);
}
int main()
{
    int tc,i;
    long unsigned int n[100];
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%lu",&n[i]);
    }
    for(i=0;i<tc;i++)
    {
        split(n[i],i+1);
    }
    return(0);
}
