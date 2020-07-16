#include <stdio.h>

void solve(long long x){
    long long a = 0, b = 0;
    long long mul = 1;
    while(x > 0){
        int mod = x%10;
        if(mod == 4){
            a+=2*mul;
            b+=2*mul;
        } else {
            a+=mod*mul;
        }
        mul*=10;
        x/=10;
    }
    printf("%lld %lld\n", a, b);
}

int main(int argc, char const *argv[])
{
    int n;
    long long x;
    scanf("%d\n", &n);
    for(int i = 0; i < n; ++i){
        scanf("%lld\n", &x);
        solve(x);
    }
    return 0;
}
