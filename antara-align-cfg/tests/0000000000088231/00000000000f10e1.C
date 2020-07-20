#include <stdio.h>
#include <stdlib.h>

int main() {

  int T, N;
  int t, a, b, k, l, temp;

  scanf("%d", &T);
  for(t = 1; t <=T; t++) {
    a = b = 0;
    k = 1;
    scanf("%d", &N);
    while(k < N) {
      temp = k;
      k *= 10;
      l = (N % k) / (temp);
      if(l == 4) a += 3 * temp;
      else a += l * temp;
    }
    b = N - a;
    printf("Case #%d: %d %d\n", t, a, b); 
  }

  return 0;
}
