#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

typedef struct point {
  i32 x, y;
} point;

void calc (i32 r, i32 c, point *p) {
  if (c > 4) {
    i32 len = 0;
    if (r % 2 == 1) {
      for (i32 i = 0; i < c; ++i) {
	p[len++] = (point){r - 3, i};
	p[len++] = (point){r - 2, (i + 2) % c};
	p[len++] = (point){r - 1, i};
      }
      r -= 3;
    }
    i32 buf = c == 5 ? 1 : 0;
    while (r > 0) {
      for (i32 i = 0; i < c; ++i) {
	p[len++] = (point){r - 2, (i + buf) % c};
	p[len++] = (point){r - 1, (i + 3 + buf) % c};
      }
      r -= 2;
    }
    return;
  }
  //c == 4
  if (r == 3) {
    i32 len = 0;
    for (i32 i = 0; i < c; ++i) {
      p[len++] = (point){r - 3, i};
      p[len++] = (point){r - 2, (i + 2) % c};
      p[len++] = (point){r - 1, i};
    }
    return;
  }
  //r == 4
  i32 len = 0;
  for (i32 i = 0; i < r - 1; ++i) {
    for (i32 j = 0; j < c; ++j) {
      p[len++] = (point){(i + 2 * (j & 1)) % r, j};
    }
  }
  i32 i = 3;
  for (i32 j = 0; j < c; ++j) {
    p[len++] = (point){(i + 2 * (j & 1)) % r, (j + 2) % c};
  }
}

void run (void) {
  i32 r, c;
  scanf ("%" SCNi32 "%" SCNi32, &r, &c);
  if ((r <= 3 && c <= 3) || r * c == 8) {
    puts("IMPOSSIBLE");
    return;
  }
  puts("POSSIBLE");
  point *p = (point *) calloc (r * c, sizeof (point));
  i32 min = r < c ? r : c;
  i32 max = r + c - min;
  calc (min, max, p);
  for (i32 i = 0; i < r * c; ++i) {
    if (r == min) {
      printf ("%" PRIi32 " %" PRIi32 "\n", p[i].x + 1, p[i].y + 1);
    } else {
      printf ("%" PRIi32 " %" PRIi32 "\n", p[i].y + 1, p[i].x + 1);
    }
  }
  free (p);
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
