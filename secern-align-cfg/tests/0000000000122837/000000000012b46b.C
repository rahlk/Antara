#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<math.h>

typedef int32_t i32;
typedef int64_t i64;

typedef uint64_t u64;

void run (void) {
  puts ("54");
  fflush (stdout);
  u64 v;
  scanf ("%" SCNu64, &v);
  u64 ans[6] = {0, 0, 0, 0, 0, 0};
  u64 d123[3] = {54, 27, 18};
  for (i32 i = 0; i < 3; ++i) {
    ans[i] = v >> d123[i];
    v -= ans[i] << d123[i];
  }
  puts ("216");
  fflush (stdout);
  scanf ("%" SCNu64, &v);
  u64 d456[3] = {54, 43, 36};
  for (i32 i = 0; i < 3; ++i) {
    ans[i + 3] = v >> d456[i];
    v -= ans[i + 3] << d456[i];
  }
  for (i32 i = 0; i < 6; ++i) {
    printf ("%" PRIu64, ans[i]);
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
