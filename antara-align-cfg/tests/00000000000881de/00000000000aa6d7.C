#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

#define POS(i, j) ((i) * (n + 1) + (j))

void query (char *s) {
  puts (s);
  fflush (stdout);
  scanf ("%s", s);
}

void solve (void) {
  i32 n, b;
  scanf ("%" SCNi32 "%" SCNi32 "%*" SCNi32, &n, &b);
  char *s = (char *) calloc (5 * (n + 1), sizeof (char));
  for (i32 i = 0; i < 5; ++i) {
    const i32 m = 1 << (4 - i);
    for (i32 j = 0; j < n; ++j) {
      s[POS(i, j)] = '0' + (j / m % 2);
    }
    query (s + POS(i, 0));
  }
  i32 *ok = (i32 *) calloc (n, sizeof (i32));
  i32 buf = 0;
  for (i32 i = 0; i < n - b; ++i) {
    if (i > 0 && s[POS(0, i)] != s[POS(0, i - 1)]) buf += 16;
    i32 t = 0;
    for (i32 j = 1; j < 5; ++j) {
      t = 2 * t + s[POS(j, i)] - '0';
    }
    ok[buf + t] = 1;
  }
  i32 *ans = (i32 *) calloc (b, sizeof (i32));
  i32 len = 0;
  for (i32 i = 0; i < n; ++i) {
    if (!ok[i]) {
      ans[len++] = i;
    }
  }
  printf ("%" PRIi32, ans[0]);
  for (i32 i = 1; i < b; ++i) {
    printf (" %" PRIi32, ans[i]);
  }
  puts ("");
  fflush (stdout);
  i32 v;
  scanf ("%" SCNi32, &v);
  if (v != 1) exit(1);
  free (s);
}

void run (void) {
  i32 t;
  scanf ("%" SCNi32, &t);
  for (i32 i = 1; i <= t; ++i) {
    solve();
  }
}

int main (void) {
  run ();
  return 0;
}
