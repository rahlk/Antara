#include<bits/stdc++.h>
using namespace std;
bool isDigitPresent(long long int x, long long int d)
{
    while (x > 0)
    {
        if (x % 10 == d)
            break;

        x = x / 10;
    }
    return (x > 0);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a=n,b=0;
        while(isDigitPresent(a,4)||isDigitPresent(b,4))
        {
            a--;
            b++;
        }
        printf("Case #%d: %lld %lld\n",i+1,a,b);
    }
}
