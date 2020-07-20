#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>

typedef int32_t i32;

void solve (void) {
  const i32 max = 100;
  char *s = (char *) calloc (max + 1, sizeof (char));
  scanf ("%s", s);
  const i32 n = strlen (s);
  for (i32 i = 0; i < n; ++i) {
    putchar (s[i] == '4' ? '3' : s[i]);
  }
  putchar (' ');
  i32 j = 0;
  for (j = 0; s[j] != '4'; ++j);
  for (; j < n; ++j) {
    putchar (s[j] == '4' ? '1' : '0');
  }
  putchar ('\n');
  free (s);
}

void run (void) {
  i32 t;
  scanf ("%" SCNi32, &t);
  for (i32 i = 1; i <= t; ++i) {
    printf ("Case #%" PRIi32 ": ", i);
    solve();
  }
}

int main (void) {
  run ();
  return 0;
}
