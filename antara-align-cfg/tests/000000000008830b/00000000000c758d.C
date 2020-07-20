#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  int k = 0;
  int i, n, l,j, flag = 0;
  int a[26];int b[1000], p;
  for (i = 0; i < t; i++) {
    flag = 0;
    k = 0;
    scanf("%d %d", &n, &l);
    for (int i = 0; i < l; i++) {
      scanf("%d", &b[i]);
    }
    for (int i = n; i > 2; i--) {
      for (int j = 2; j < i; j++) {
        if (i % j == 0)
        {
          flag = 1;
          break;
        }
      }
      if (flag == 0 && k < 26)
        a[k] = i;
      printf("%d", a[k]);
      k++;
    }
    printf("Case #%d: ", i+ 1);
    for (k = 0; k < l; k++) {
      for (i = 0; i < 26; i++) {
        for (j = 0; j < 25; j++) {
          p = a[i] * a[j + 1];
          if (p == b[k])
            break;
        }
        break;
      }
      printf("%d", p);
      printf("%c%c", i, j+1);
    }
  }
  return 0;
}
