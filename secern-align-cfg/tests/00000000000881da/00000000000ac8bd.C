#include <stdio.h>

int main() {
  int T;
  scanf("%d\n", &T);
  for(int t = 1; t <= T; ++t) {
    printf("Case #%d: ", t);
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < 2 * n - 2; ++i)
      putchar(getchar() == 'E' ? 'S' : 'E');
    putchar('\n');
  }
  return 0;
}
