#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        long long n;
        scanf("%lld", &n);
        long long a = n, b = 0;
        int j = 0;
        while (n >= 4) {
            int x = n%10;
            if (x == 4) {
                if (j == 0) {
                    a -= 2;
                    b += 2;
                } else {
                    a -= pow(10,j);
                    b += pow(10,j);
                }
            }
            n = n/10;
            j++;
        }
        printf("Case #%d: %lld %lld\n", i+1, a, b);
    }
    return 0;
}
