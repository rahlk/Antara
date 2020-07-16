#include<stdio.h>
int main()
{
    int T,N,i,A,B,r,C,d,sum=0,D;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        A=N/2;
        C=A;
        for(int j=0; d!=0; j++)
        {
            r=C%10;
            d=C/10;
            C=d;
            if(r==4)
            {
                sum++;
                D=A/2;
                C=D;
            }
            //printf("%d\n",r);
        }
        if(sum>=1)
        {
        B=N-D;
        printf("Case #%d: %d %d\n",i,D,B);
        }
        else
        {
        B=N-A;
        printf("Case #%d: %d %d\n",i,A,B);
        }
    }
}
