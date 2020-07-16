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
    int i, len, counta = 0, tempa = 0, countb = 0, tempb = 0, da = 0, db = 0;
    char n[100];
    scanf("%s", n);
    len = strlen(n);
    int nn[len], c[len];
    for (i = 0; i < len; i++) {
      nn[i] = n[i] - '0';
      c[i] = nn[i];
    }
    for (i = 0; i < len; i++) {
      if (nn[i] == 4) {
        nn[i] -= 1;
      }
    }
    for (i = len - 1; i >= 0; i--) {
      da = pow(10, counta) * c[i];
      tempa += da;
      counta++;
      //printf("%d ", da);
    }
    for (i = len - 1; i >= 0; i--) {
      db = pow(10, countb) * nn[i];
      tempb += db;
      countb++;
    }
    printf("Case #%d: %d %d\n", tt, tempb, (tempa - tempb));
  }
  return 0;
}
