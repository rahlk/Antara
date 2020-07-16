#include <stdio.h>
#include <stdlib.h>
int verification( long int n)
{
    long int c,d;
    d=n;
    while(d)
    {
        c=d%10;
        if(c==4) return 0;
        d=d/10;
    }
    return 1;
}

int main()
{
    long int T,N,j,m,i;
    scanf("%ld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%ld",&N);
        printf("Case #%ld=",i);
        for(j=1;j<=N/2;j++)
        {
            if(verification(j)==1)
            {
             m=N-j;
            if(verification(m)==1)
                {printf("%ld %ld\n",j,m); break;}
            }
        }
    }
}
