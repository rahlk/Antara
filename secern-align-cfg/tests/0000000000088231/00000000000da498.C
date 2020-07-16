#include<stdio.h>
int main()
{
    int T,N,i,A,B,r,C,d;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        A=N/2;
        C=N;
        for(int j=0; d!=0; j++)
        {
            r=C%10;
            d=C/10;
            C=d;
            if(r==4)
                C=A/2;
            //printf("%d\n",r);
        }
        B=N-C;
        printf("Case #%d: %d %d",i,C,B);
    }
}
