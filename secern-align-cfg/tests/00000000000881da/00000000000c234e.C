#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    printf("Case #%d: ", t);

    int n;
    char p[100000];

    scanf("%d %s", &n, p);
    for (int i = 0; i < 2 * n - 2; i++) {
      if (p[i] == 'E') {
        printf("S");
      } else {
        printf("E");
      }
    }
    printf("\n");
  }
}
