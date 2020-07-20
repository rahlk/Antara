#include <stdio.h>

int main() {
  long long t, n, a, b, i;
  scanf("%lld", t);
  for(i=1; i <= t; i++) {
    scanf("%llu", n);
    a = n / 2;
    b = a + (n % 2);
    long long temp = a, mult = 1;
    while(temp) {
        if(temp % 10 == 4) {
          a += mult;
          b -= mult;
        }
        temp /= 10;
        mult *= 10;
    }
    printf("Case #%llu: %llu %llu", i, a, b)
  }
  return 0;
}