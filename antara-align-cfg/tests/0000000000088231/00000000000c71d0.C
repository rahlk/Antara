#include<stdio.h>
void main()
{
    long int n,a,b,k,i,j,t;
    int c;
    scanf("%ld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%ld",&n);
        for(i=0;i<(n/2);i++)
        {
            for(j=n;j>(n/2);j--)
            {
                if(i+j==n)
                {
                    a=i;
                    b=j;
                    c=1;
                    break;
                }
            }
            if(c==1)
            break;
        }
        printf("Case#%ld: %ld %ld",k,a,b);
    }
}