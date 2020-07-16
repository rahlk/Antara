#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int T,N,M;
    scanf("%d",&T);
    int res[2*T];
    for(int i=0;i<2*T;i=i+2)
    {
        N=0;
        M=0;
        int mult=1;
        scanf("%ld",&N);
        long int R=N;
        while(R>=4)
        {
            if(R%10==4)
            {
                R=R-1;
                M=M+mult;
            }
            R=R/10;
            mult=mult*10;
        }
        res[i]=M;
        res[i+1]=N-M;
    }
    int j=0;
    for(int i=0;i<2*T;i=i+2)
    {
        printf("Case #%d: %ld %ld\n",j+1,res[i],res[i+1]);
        j++;
    }
}