#include<stdio.h>
int main()
{
    int T,N,i,A,B;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        A=N/2;
        B=N/2;
        printf("Case %d: %d %d",i,A,B);
    }
}
