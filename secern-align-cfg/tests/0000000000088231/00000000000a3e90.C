#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  long long int t, i, j, x, sum, k, n, count,f=0;
  scanf("%lld", &t);
  while (t--) 
  {
    f++;
    sum = 0;
    count = 0;
    scanf("%lld", &n);
    x = n;
    while (x > 0) {
      if (x % 10 == 4) {
        sum = sum + pow(10, count);
      }
      x = x / 10;
      count++;
    }
    printf("case #%lld: %lld %lld\n",f, sum, n - sum);
  }
}
