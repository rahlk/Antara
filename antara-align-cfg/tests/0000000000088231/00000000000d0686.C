#include<stdio.h>
void main()
{
    long int a,b,k,i,j,t,x;
    int c=0;
    long long int n;
    scanf("%ld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        for(i=1;i<(n/2);i++)
        {
                x=i;
                while(x>0)
                {
                    if(x%10==4)
                    {
                        c=1;
                        break;
                    }
                    x=x/10;
                }
                for(j=n-1;j>(n/2);j--)
            {
                if(c==1)
                break;
                c=0;
                x=j;
                while(x>0)
                {
                    if(x%10==4)
                    {
                        c=1;
                        break;
                    }
                    x=x/10;
                }
                if(c!=1&&i+j==n)
                {
                    a=i;
                    b=j;
                    c=2;
                    break;
                }
            }
            if(c==2)
            break;
        }
        printf("Case#%ld: %ld %ld",k,a,b);
    }
}