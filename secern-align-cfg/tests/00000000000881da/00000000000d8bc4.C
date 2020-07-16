#include <stdio.h>

int main() {
  int t;
  char s[50010];
  int n;
  int i, j, k;
  char c;
  scanf("%d", &t);
  for(i = 0; i < t; i++) {
    scanf("%d", &n);
    scanf("%s", &s);
    printf("Case #%d: ", i+1);
    for(j = 0; j < (n - 1) * 2; j++) {
      if (s[j] == 'S') {
        printf("E");
      } else {
        printf("S");
      }
    }
    printf("\n");
  }
}
