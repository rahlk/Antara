#include<stdio.h>

long long unsigned count=0;

long long unsigned countdigi(long long unsigned n)
{
    long long unsigned total=0;
    while(n != 0)
    {
        n /= 10;
        ++total;
    }
    return total;
}

int checknum(long long unsigned a)
{
    long long unsigned x,y;

    y=countdigi(a);

    while(a!=0)
    {
        x=a%10;
        if(x!=4)
            count++;
        else
            break;

        a=a/10;
    }

    if(y==count)
        return 1;

    return 0;
}

int main()
{
    long long unsigned t,n,i,j,k,m,p;
    scanf("%llu",&t);

    for(i=0;i<t;i++)
    {
        scanf("%llu",&n);

        for(j=1;j<n;j++)
        {
            for(k=1;k<n;k++)
            {
                if(checknum(j)==1 && checknum(k)==1)
                {
                    if(j+k==n)
                    {
                        m=j;
                        p=k;
                        break;
                    }
                }
            }

            if(j+k==n)
                break;
        }

        printf("Case #%llu: %llu %llu\n",i+1,m,p);
    }

    return 0;
}