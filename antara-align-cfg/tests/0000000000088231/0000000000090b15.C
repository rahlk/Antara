#include<stdio.h>
int main()
{
    long long int T,N,i,j,k,l,s,sum,f=0,g=0,m;
    scanf("%ldd",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
    for(j=1;j<N;j++)
    {
        f=0;
        g=0;
        sum=j;
        while(sum!=0)
        {
            s=sum%10;
            if(s==4)
            {
                f=1;
                break;
            }
            sum=sum/10;
        }
        if(f==1)
        continue;
        m=N-j;
        sum=m;
        while(sum!=0)
        {
            s=sum%10;
            if(s==4)
            {
                g=1;
                break;
            }
            sum=sum/10;
        }
        if(g==0)
        break;
        
    }
    printf("Case #%lld: %lld %lld\n",i+1,j,m);
    }
    
}