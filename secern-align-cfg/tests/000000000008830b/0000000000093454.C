#include<stdio.h>
int main()
{
    long long int T,N,i,j,k,l,c,m,b,L,z,s,x;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        scanf("%lld",&L);
        long long int br[L];
        for(z=0;z<L;z++)
        scanf("%lld",&br[z]);
          
    long long int ar[26]={0};
    char cr[26];
    s=90;
    l=26;
    for(j=N;j>=0;j--)
    {
        c=0;
        for(k=1;k<j;k++)
        {
            if(j%k==0)
            c++;
        }
        if(c==1)
        {
            l--;
            ar[l]=j;
            cr[ar[l]]=s;
            s--;
        }
        if(l==0)
        break;
    }
    printf("Case #%lld : ",i+1);
    for(m=0;m<26;m++)
    {
        if(br[0]%ar[m]==0)
        {
            printf("%c",cr[ar[m]]);
            x=br[0]/ar[m];
            printf("%c",cr[x]);
            break;
        }
    }
    for(m=1;m<L;m++)
    {
        x=br[m]/x;
        printf("%c",cr[x]);
    }
    printf("\n");
}
}