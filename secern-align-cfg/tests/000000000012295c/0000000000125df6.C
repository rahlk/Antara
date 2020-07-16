#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  i32 n, q;
  scanf ("%" SCNi32 "%" SCNi32, &n, &q);
  i32 *dp_x = (i32 *) calloc (q + 1, sizeof (i32));
  i32 *dp_y = (i32 *) calloc (q + 1, sizeof (i32));
  const char direction[] = "ENWS";
  for (i32 i = 0; i < n; ++i) {
    i32 x, y;
    scanf ("%" SCNi32 "%" SCNi32, &x, &y);
    char s[10];
    scanf ("%s", s);
    i32 dir = 0;
    for (; dir < 4; ++dir) {
      if (s[0] == direction[dir]) {
        break;
      }
    }
    if (dir % 2 == 0) {
      for (i32 i = 0; i <= q; ++i) {
	if (x == i) continue;
	if (dir == 0 && i > x) dp_x[i]++;
	if (dir == 2 && i < x) dp_x[i]++;
      }
    } else {
      for (i32 i = 0; i <= q; ++i) {
	if (y == i) continue;
	if (dir == 1 && i > y) dp_y[i]++;
	if (dir == 3 && i < y) dp_y[i]++;
      }
    }
  }
  i32 ans_x = 0;
  for (i32 i = 0; i <= q; ++i) {
    if (dp_x[i] > dp_x[ans_x]) ans_x = i;
  }
  i32 ans_y = 0;
  for (i32 i = 1; i <= q; ++i) {
    if (dp_y[i] > dp_y[ans_y]) ans_y = i;
  }
  printf ("%" PRIi32 " %" PRIi32 "\n", ans_x, ans_y);
  free (dp_x);
  free (dp_y);
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
