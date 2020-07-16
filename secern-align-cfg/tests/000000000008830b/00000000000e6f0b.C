#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int T,N,L;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        scanf("%d",&L);
        int crypt[L],temp[L],primes[1000],reqprimes[26];
        for(int j=0;j<L;j++)
        {
            scanf("%d",&crypt[j]);
            temp[j]=crypt[j];
        }
        int count=0;
        for(int k=1;k<N;k++)
        {
        for(int l=1;l<=k;l++)
        {
            if(k%l==0)count++;
        }
        if(count>2)primes[k-1]=k;
        }
        for(int m=0;m<1000;m++)
        {
            for(int n=0;n<L;n++)
            {
                if((primes[m]*primes[m+1])==temp[n])
                {
                    int p=m;
                    for(int o=0;o<26;o++)
                    {
                        reqprimes[o]=primes[p+o];
                    }
                }
            }
        }
        char plain[L];
        for(int r=0;r<L;r++)
        {
            for(int s=0;s<L;s++)
            {
                if((reqprimes[r]*reqprimes[r+1])==crypt[s])
                {
                    plain[s]= (char)65+r;
                }
            }

        }
        printf("Case #%d: ",i+1);
        for(int t=0;t<=L;t++)
        {
            printf("%s",plain[t]);
        }
        printf("\n");
    }
    return 0;
}