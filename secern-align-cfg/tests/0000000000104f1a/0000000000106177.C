#include <stdio.h>

int sum(int n) {
  int i, s, x;
  printf("%d", n);
  for (i = 1; i < 18; ++i) {
    printf(" %d", n);
  }
  printf("\n");
  fflush(NULL);
  s = 0;
  for (i = 0; i < 18; ++i) {
    scanf("%d", &x);
    s += x;
  }
  return s % n;
}

static int SIZES[7] = { 4, 3, 5, 7, 11, 13, 17 };
static int INVERSES[7] = { 3, 2, 4, 1, 6, 2, 16 };
static int PRODUCT = 1021020;

int main(void) {
  int T, N, M, R;
  scanf("%d %d %d", &T, &N, &M);
  for (int t = 0; t < T; ++t) {
    int results[7];
    for (int i = 0; i < 7; ++i) { results[i] = sum(SIZES[i]); }
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
      sum += results[i] * (PRODUCT / SIZES[i]) * INVERSES[i];
      sum %= PRODUCT;
    }
    printf("%d\n", sum);
    fflush(NULL);
    scanf("%d", &R);
    if (R == -1) return 1;
  }
}
