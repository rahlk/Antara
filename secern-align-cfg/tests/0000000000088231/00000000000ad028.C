#include <stdio.h>

int main()
{
    int N;
    int M,a,s,b;
    scanf("%d",&M);
    N==M;
    while(N>0)
    {
    s=N%10;
    N=N/10;
    if(s==4)
    {
        a=M/3;
        b=M-a;
        printf("%d:%d",a,b);
    }
    }
    return 0;
}

