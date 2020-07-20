#include<stdio.h>

typedef long long int ll;
char str[1000000];

int main()
{
    ll t;
    scanf("%lld",&t);
    for(int x = 1; x <= t; x++)
    {
        ll n;
        scanf("%lld",&n);
        scanf("%s",str);
        printf("Case #%d: ",x);
        for(ll i=0;i<2*n-2;i++)
        {
            if(str[i]=='S')
            str[i]='E';
            else
            str[i]='S';
        }
        printf("%s\n",str);
    }
}
    