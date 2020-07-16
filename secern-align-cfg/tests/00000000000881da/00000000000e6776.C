#include <stdio.h>

int main(void) {
  int T, N;
  char c;
  scanf("%d\n", &T);

  for (int i = 1; i <= T; ++i) {
    scanf("%d\n", &N);
    N = 2 * N - 2;
    printf("Case #%d: ", i);
    while (N--) {
      c = getchar();
      if (c == 'S')
        putchar('E');
      else if (c == 'E')
        putchar('S');
    }
    putchar('\n');
  }
}