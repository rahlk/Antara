#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>

typedef int32_t i32;

void solve (void) {
  i32 n;
  scanf ("%" SCNi32, &n);
  i32 len = 2 * n - 2;
  char *s = (char *) calloc (len + 1, sizeof (char));
  scanf ("%s", s);
  for (i32 i = 0; i < len; ++i) {
    putchar (s[i] == 'S' ? 'E' : 'S');
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
