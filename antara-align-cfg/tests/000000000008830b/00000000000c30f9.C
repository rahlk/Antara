#include<stdio.h>
#include<string.h>
int main()
{
    int T,number=1;
    scanf("%d",&T);
    while(T--)
    {
        int n,l,k;
        scanf("%d %d",&n,&l);
        int ci[l],i,ll,primes[l+1],pr=0,s=0,j;
        for(i=0;i<l;i++)
        {
            scanf("%d",&ci[i]);
        }
        int f = ci[0];
        for(i=3;i<=n;i=i+2)
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
        int e;
        int ans[26],ansindex = 0,increpted[pr+1],index;
        ans[0]=f;
        ans[1]=ll;
        e=2;
        for(i=2;i<=l;i++)
        {
            s=primes[i]=ci[i-1]/primes[i-1];
            for(j=0;j<e;j++)
            {
                if(ans[j]==s)break;
            }
            if(j==e)
                {
                    ans[e]=s;
                    e++;
                }
        }
        e--;
        for(i=0;i<e;i++)
        {
            for(j=i+1;j<=e;j++)
            {
                if(ans[j]<ans[i])
                {
                    s=ans[i];
                    ans[i]=ans[j];
                    ans[j]=s;
                }
            }
        }
        printf("Case #%d: ",number);
        char decrepted[l+1];
        for(j=0;j<=l;j++)
        {
            for(k=0;k<=e;k++)
            {
                if(ans[k]==primes[j])
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