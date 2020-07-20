#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    printf("Case #%d: ", t);

    char n[101];
    char n2[101];

    scanf("%s", n);
    int len = strlen(n);
    int first = -1;
    for (int i = 0; i < len; i++) {
      if (n[i] == '4') {
        n[i] = '3';
        n2[i] = '1';
        if (first == -1) {
          first = i;
        }
      } else {
        n2[i] = '0';
      }
    }
    n2[len] = '\0';

    printf("%s %s\n", n, n2 + first);
  }
}
