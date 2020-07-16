#include <stdio.h>

int main() {
  int n, N;
  int t, T;
  char P;
  scanf("%i", &T);
  t = 0;
  while (t++ < T) {
    scanf("%i\n", &N);
    printf("Case #%i: ", t);
    N = 2 * N - 2;
    for (n=0;n<N;n++) {
      scanf("%c", &P);
      if (P == 'E')
        putchar('S');
      else
        putchar('E');
    }
    scanf("\n");
    printf("\n");
  }
  return 0;
}