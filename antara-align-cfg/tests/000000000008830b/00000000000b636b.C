#include<stdio.h>
#include<string.h>
int main()
{
    int T,number=1;
    scanf("%d",&T);
    while(T--)
    {
        int n,l;
        scanf("%d %d",&n,&l);
        int ci[l],i,ll,primes[l+1],pr=0,s=0,j;
        for(i=0;i<l;i++)
        {
            scanf("%d",&ci[i]);
        }
        int f = ci[0];
        for(i=2;i<=n;i++)
        {
            if(f%i==0)
            {
                f=i;
                ll=ci[0]/i;
                break;
            }
        }
        primes[0]=f;
        primes[1]=ll;
        if(f<ll)s=f;
        else s=ll;
        pr = 2;
        for(i=2;i<=l;i++)
        {
            primes[pr]=ci[i-1]/primes[pr-1];
            if(primes[pr]<s)s=primes[pr];
            pr++;
        }
        pr--;
        //actual no of primes pr+1
        int ans[26],ansindex = 0,sorted[l+1],increpted[pr+1],index;
        for(j=0;j<=pr;j++)
        {
            increpted[j]=primes[j];
        }
        ans[0]=s;
        for(i=0;i<pr;i++)
        {
            for(j=i+1;j<=pr;j++)
            {
                if(primes[j]<primes[i])
                {
                    s=primes[i];
                    primes[i]=primes[j];
                    primes[j]=s;
                }
            }
        }

        ansindex=1;
        ans[0]=primes[0];
        for(j=1;j<=pr;j++)
        {
            if(ans[ansindex-1]!=primes[j])
                {
                    ans[ansindex]=primes[j];
                    ansindex++;
                }
        }

        printf("Case #%d: ",number);
        char decrepted[l+1];
        for(j=0;j<=i;j++)
        {
            for(int k=0;k<ansindex;k++)
            {
                if(ans[k]==increpted[j])
                {
                decrepted[j]=k+65;
                break;
                }
            }
        }
        decrepted[j]=0;
        printf("%s\n",decrepted);
        number++;
    }
    return 0;
}