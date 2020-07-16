#include <stdio.h>

int main()
{
    int N;
    int a,s,b;
    scanf("%d",&N);
    while(N>0)
    {
    s=N%10;
    N=N/10;
    if(s==4)
    {
        a=N/3;
        b=N-a;
        printf("%d:%d",a,b);
    }
    }
    return 0;
}