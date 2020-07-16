#include <stdio.h>
#include <stdlib.h>

int main() {

  int T, N;
  int t, a, b, k, l;

  scanf("%d", &T);
  for(t = 1; t <=T; t++) {
    a = b = 0;
    k = 1;
    scanf("%d", &N);
    while(k < N) {
      k *= 10;
      a *= 10;
      l = (N % k) / (k / 10);
      if(l == 4) a += 3;
      else a += l;
    }
    b = N - a;
    printf("%d %d\n", a, b);
  }

  return 0;
}
