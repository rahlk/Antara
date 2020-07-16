#include<stdio.h>
#include<stdlib.h>
int isprime(int n)
{
    int f=0,i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        return 1;
    else
        return 0;
}
int main()
{
    int T,N,i,j,a[100],c,k,m,div,l,prime[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&N,&c);
        j=0;
        for(k=0;k<c;k++)
        {
           scanf("%d",&a[k]) 
        }
        for(k=3;k<=N;k++)
        {
            if(isprime(k))
            {
                prime[j++]=k;
            }
        }
        l=0;
        printf("Case #%d: ",i);
        for(k=0;k<=N;k++)
        {
            div=a[l]/prime[k];
            if(isprime(div))
            {
                printf("%c",65+k);
            }
        }
    }
return 0;
}