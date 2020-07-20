#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<math.h>

typedef int32_t i32;
typedef int64_t i64;

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) > (0) ? (a) : -(a))

void run (void) {
  i32 n, k;
  scanf ("%" SCNi32 "%" SCNi32, &n, &k);
  i32 *c = (i32 *) calloc (n, sizeof (i32));
  i32 *d = (i32 *) calloc (n, sizeof (i32));
  for (i32 i = 0; i < n; ++i) {
    scanf ("%" SCNi32, c + i);
  }
  for (i32 i = 0; i < n; ++i) {
    scanf ("%" SCNi32, d + i);
  }
  i32 ans = 0;
  for (i32 i = 0; i < n; ++i) {
    for (i32 j = i; j < n; ++j) {
      i32 max_c = c[i];
      i32 max_d = d[i];
      for (i32 k = i + 1; k <= j; ++k) {
	max_c = MAX(max_c, c[k]);
	max_d = MAX(max_d, d[k]);
      }
      if (ABS(max_c - max_d) <= k) {
	ans++;
      }
    }
  }
  printf ("%" PRIi32 "\n", ans);
  free (c);
  free (d);
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
