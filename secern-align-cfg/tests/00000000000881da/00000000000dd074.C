#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>  //for bool
#include <stdlib.h> // abs,labs,llabs
#include <limits.h>
#include <ctype.h>

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld; //%Lf

int main(void) {
  int t, tt;
  scanf("%d", &t);
  for (tt = 1; tt <= t; tt++) {
    int n, len, i;
    scanf("%d", &n);
    char s[2 * n - 2], ans[2 * n -2];
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++) {
      if (s[i] == 'S') {
        ans[i] = 'E';
      } else {
        ans[i] = 'S';
      }
    }
    ans[len] = '\0';
    printf("Case #%d: %s\n",tt ,ans);
  }
  return 0;
}
