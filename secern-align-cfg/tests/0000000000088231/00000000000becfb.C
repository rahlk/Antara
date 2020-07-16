#include <stdio.h>

void solve(int num, long long x){
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
    printf("Case #%d: %lld %lld\n", num, a, b);
}

int main(int argc, char const *argv[])
{
    int n;
    long long x;
    scanf("%d\n", &n);
    for(int i = 0; i < n; ++i){
        scanf("%lld\n", &x);
        solve(i+1, x);
    }
    return 0;
}
