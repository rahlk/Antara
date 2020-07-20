#include<stdio.h>
int a,b;
int four(int i,int j)
{
    while(i>0)
    {   if(i%10==4)
            return 0;
        i/=10;
    }
    while(j>0)
    {
        if(j%10==4)
            return 0;
        j/=10;

    }
    return 1;
}
void check(int N)
{
    int i,j;
    for(i=N-1,j=1;j<=N/2;i--,j++)
    {
        if(four(i,j)==1)
        {
            a=i;
            b=j;
            break;
        }

    }
}
void main()
{
    int T,N[100],i,m=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
        scanf("%d",&N[i]);
    for(m=0;m<T;m++)
    {   a=b=0;
        check(N[i]);
        printf("Case #%d: %d %d\n",m+1,a,b);
    }
}