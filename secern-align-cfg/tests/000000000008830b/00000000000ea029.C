#include<stdio.h>
int main()
{
    long long int e,f,g,h,i,j,k,t,n,l,m,found;
    int prime[26]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,78,83,89,97,101,103};
    char alph[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char **a;
    char **b;
    char *c;
    char *d;
    while(1)
    {
        scanf("%lld",&t);
        if(t<1 || t>100) continue;
        else break;
    }
    k=1;
    while(k<=t)
    {
        while(1)
        {
            gets(c);
            e=0;
            while(c[e]!=' ')
            {
                ++e;
            }
            f=e-1;
            n=0;
            g=1;
            while(f>=0)
            {
                n=n+((c[f]-48)*g);
                g*=10;
                --f;
            }
            e++;
            l=0;
            g=1;
            while(c[e]!='\n')
            {
                l=l+((c[e]-48)*g);
                g*=10;
                ++e;
            }
            if(l<25 || l>100)
            {
                printf("25 ≤ L ≤ 100");
                continue;
            }
            break;
        }
        gets(d);
        e=0;
        i=0;
        while(d[e]!='\n')
        {
            while(d[e]!=' ' || d[e]!='\n')
            {
                ++e;
            }
            j=0;
            f=e-1;
            while(d[f]!=' ' || f>=0)
            {
                a[i][j++]=d[e];
                --f;
            }
            a[i][j]='\n';
            i++;
        }
        e=0;
        while(e<l)
        {
            n=0;
            g=1;
            f=0;
            while(a[e][f]!='\n')
            {
                n=n+((a[e][f]-48)*g);
                g*=10;
                f++;
            }
            g=0;
            found=0;
            while(g<26)
            {
                if(n%prime[g]==0)
                {
                    printf("%d",prime[g]);
                    break;
                }
                ++g;
            }
            ++e;
        }
        ++k;
    }
    return 0;
}