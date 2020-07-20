#include<stdio.h>

typedef long long int ll;
char str[1000000];

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        scanf("%s",str);
        for(ll i=0;i<2*n-3;i++)
        {
            if(str[i]=='S')
            str[i]='E';
            else
            str[i]='S';
        }
        printf("%s\n",str);
    }
}
    