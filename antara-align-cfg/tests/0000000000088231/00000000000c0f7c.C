#include<stdio.h>
int main()
{
    int N,T,i,a,b;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        a=N/2;
        b=N-a;
        printf("Case #%d: %d %d",i,a,b);
    }
return 0;
}