#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;
typedef int64_t i64;

typedef struct fraction {
  i64 nu, de;
} frac;

int cmp (const void *a, const void *b) {
  frac *p = (frac *)a;
  frac *q = (frac *)b;
  i64 d = p->nu * q->de - p->de * q->nu;
  return d == 0 ? 0 : d < 0 ? -1 : 1;
}

void run (void) {
  i32 n;
  scanf ("%" SCNi32, &n);
  i32 *a = (i32 *) calloc (n, sizeof (i32));
  i32 *b = (i32 *) calloc (n, sizeof (i32));
  for (i32 i = 0; i < n; ++i) {
    scanf ("%" SCNi32 "%" SCNi32, a + i, b + i);
  }
  frac *q = (frac *) calloc (n * n, sizeof (frac));
  i32 len = 0;
  for (i32 i = 0; i < n; ++i) {
    for (i32 j = i + 1; j < n; ++j) {
      if (a[i] == a[j] || b[i] == b[j]) continue;
      i64 nu = a[i] - a[j];
      i64 de = b[i] - b[j];
      if (de < 0) {
	de *= -1;
	nu *= -1;
      }
      if (nu > 0) continue;
      q[len++] = (frac) {-nu, de};
    }
  }
  q[len++] = (frac) {0, 1};
  qsort (q, len, sizeof (frac), cmp);
  i32 ans = 1;
  for (i32 i = 1; i < len; ++i) {
    if (cmp (q + i, q + ans - 1) == 0) continue;
    q[ans++] = q[i];
  }
  printf ("%" PRIi32 "\n", ans);
  free (q);
  free (a);
  free (b);
}

int main (void) {
  i32 t;
  scanf ("%" SCNi32, &t);
  for (i32 i = 1; i <= t; ++i) {
    printf ("Case #%" PRIi32 ": ", i);
    run();
  }
  return 0;
}
