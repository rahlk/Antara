#include <stdio.h>
#include <stdlib.h>

int abs(int a) {
  if(a >= 0) return a;
  return -a;
}

int main() {

  int t, T, N, K, *C, *D, i, Cr, Dr, pairs;

  scanf("%d", &T);
  for(t = 1; t <= T; t++) {
    scanf("%d %d", &N, &K);
    C = malloc(N * sizeof(int));
    D = malloc(N * sizeof(int));
    for(i = 0; i < N; i++) scanf("%d", &C[i]);
    for(i = 0; i < N; i++) scanf("%d", &D[i]);
    pairs = 0;
    for(int l = 0; l < N; l++) {
      Cr = C[l];
      Dr = D[l];
      for(int r = l; r < N; r++) {
        if(C[r] > Cr) Cr = C[r];
        if(D[r] > Dr) Dr = D[r];
        if(abs(Dr - Cr) <= K) pairs++;
      }
    }
    printf("Case #%d: %d\n", t, pairs);
    free(C);
    free(D);
  }
  return 0;
}
