#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i;
    long long int n,l,r,j;
    char p[1000000];

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        scanf("%s",p);
        fflush(stdin);
        l=strlen(p);
        for(j=0;j<l;j++)
        {
            if(p[j]=='E')
            {
                p[j] = 'S';
            }
            else
            {
                p[j] = 'E';
            }
        }
        printf("Case #%lld: %s\n",i,p);
    }
}