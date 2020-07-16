#include <stdio.h>
#include <string.h>
#include <math.h>
long long factor(long long a)
{
    if(a%2==0)
    return 2;
    int i;
    for(i=3;i<=a;i+=2)
    if(a%i==0)
    return i;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    int j;
    for(j=1;j<=t;j++)
    {
        int L;
        int i,k;
        long long N;
        scanf("%lld %d",&N,&L);
        long long num[26];
        long long nu1,nu2,nu,n;
        scanf("%lld %lld",&nu1,&nu2);
        long long a=factor(nu1);
        long long b=nu1/factor(nu1);
        //printf("A=%lldB=%lld\n",a,b);
        long long ac[L+1];
        int count=0;
        int visited[N+1];
        for(i=0;i<=N;i++)
        visited[i]=0;
        if(nu2%a==0)
        {
            ac[0]=b;
            ac[1]=a;
            ac[2]=nu2/a;
            nu=nu2/a;
            visited[a]=1;
            visited[b]=1;
            visited[nu2/a]=1;
        }
        else if(nu2%b==0)
        {
            ac[0]=a;
            ac[1]=b;
            ac[2]=nu2/b;
            nu=nu2/b;
            visited[a]=1;
            visited[b]=1;
            visited[nu2/b]=1;
        }
        //printf("%lld\n",nu);
        //printf("%lld %lld %lld ",ac[0],ac[1],ac[2]);
        count=3;
        for(i=3;i<=L;i++)
        {
            scanf("%lld",&n);
            //printf("n/nu: %lld\n",n/nu);
            ac[count]=n/nu;
            if(visited[n/nu]==0)
            visited[n/nu]=1;
            nu=n/nu;
            count++;
            printf("%lld ",ac[count-1]);
        }
        printf("\n");
        count=0;
        for(i=1;i<=N;i++)
        {
            if(visited[i]==1)
            {
                num[count]=i;
                count++;
            }
        }
        printf("Case #%d: ",j);
        for(i=0;i<26;i++)
        //printf("%lld ",num[i]);
        //printf("\n");
        for(i=0;i<L;i++)
        {
            for(k=0;k<26;k++)
            {
                if(num[k]==ac[i])
                {
                    printf("%c",65+k);
                }
            }
        }
    }
return 0;
}
