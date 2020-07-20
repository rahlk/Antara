#include<stdio.h>
int main()
{
    int n,k,a,b,p,i,x;
    scanf("%d\n",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&n);
        p=n/4;
        a=p*3;
        b=p;
        x=i+1;
        printf("Case #%d: %d %d",x,a,b);
    }
}