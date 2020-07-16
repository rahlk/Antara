#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

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
    char *p = s + (n + 1) * i;
    for (i32 j = 0; j < n; ++j) {
      p[j] = '0' + (j / m % 2);
    }
    query (p);
  }
  i32 *ans = (i32 *) calloc (b, sizeof (i32));
  i32 len = 0;
  i32 i = 0;
  i32 head = 0;
  for (; head + 15 < n; head += 16) {
    i32 j = i;
    while (j < n && s[i] == s[j]) j++;
    i32 l = i;
    for (i32 k = 0; k < 16 && l < n - b; ++k) {
      i32 t = 0;
      for (i32 p = 1; p < 5; ++p) {
        t = 2 * t + s[p * (n + 1) + l] - '0';
      }
      if (t == k) {
        l++;
      } else {
        ans[len++] = head + k;
      }
    }
    i = j;
  }
  i32 l = i;
  i32 k = 0;;
  for (; head + k < n && l < n - b; ++k) {
    i32 t = 0;
    for (i32 p = 1; p < 5; ++p) {
      t = 2 * t + s[p * (n + 1) + l] - '0';
    }
    if (t == k) {
      l++;
    } else {
      ans[len++] = head + k;
    }
  }
  while (head + k < n) ans[len++] = head + k++;
  printf ("%" PRIi32, ans[0]);
  for (i32 i = 1; i < len; ++i) {
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
