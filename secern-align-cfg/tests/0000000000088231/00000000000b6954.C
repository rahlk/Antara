#include<stdio.h>
int main()
{
    int x=0,N,n,y,i;
    scanf("%d",&n);
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        N=N%10;
        x=x+N;
        N=N/10;
    }
    printf("%d",x);
    y=N-x;
    printf("%d",y);
    return 0;
}