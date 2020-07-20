#include<stdio.h>
int divide(int N)
{   int i;
    int a,b;
    for(i=0;i<N;i++)
    {
        if(i+i==N);
        a=i;
        b=i;
        break;
    }
    return a,b;
}
int main()
{   int T,a,b;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        divide(N);
        printf("%d %d",a,b);
    }
}