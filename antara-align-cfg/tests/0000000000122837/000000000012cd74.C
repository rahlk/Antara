#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;
typedef int64_t i64;

void run (void) {
  puts ("54");
  fflush (stdout);
  i64 v;
  scanf ("%" SCNi64, &v);
  i64 ans[6] = {0, 0, 0, 0, 0, 0};
  i64 d1234[4] = {54, 27, 18, 13};
  for (i32 i = 0; i < 2; ++i) {
    ans[i] = v >> d1234[i];
    v -= ans[i] << d1234[i];
  }
  puts ("220");
  fflush (stdout);
  i64 w;
  scanf ("%" SCNi64, &w);
  i64 d456[3] = {55, 44, 36};
  for (i32 i = 0; i < 3; ++i) {
    ans[i + 3] = w >> d456[i];
    w -= ans[i + 3] << d456[i];
  }
  v -= ans[3] << d1234[3];
  ans[2] = v >> d1234[2];
  for (i32 i = 0; i < 6; ++i) {
    printf ("%" PRIi64, ans[i]);
    putchar (i == 5 ? '\n' : ' ');
  }
  fflush (stdout);
  i32 res;
  scanf ("%" SCNi32, &res);
  if (res == -1) exit(1);
}

int main (void) {
  i32 t, w;
  scanf ("%" SCNi32 "%" SCNi32, &t, &w);
  while (t--) {
    run();
  }
  return 0;
}
