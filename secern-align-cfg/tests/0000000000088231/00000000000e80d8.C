#pragma GCC optimize("-O3")
#pragma GCC optimize("inline")
#pragma GCC optimize("omit-frame-pointer")
#pragma GCC optimize("unroll-loops")
#undef __NO_INLINE__
#define __OPTIMIZE__ 1

#define inline __attribute__((always_inline)) inline

#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

void solve(int n, int d);
inline int clean(int a);

int main(int argc, char* argv[])
{
  int   n = 0;
  int   d = 0;

  scanf("%d", &(n));
  for (int i=0; i<n; i++)
  {
    scanf("%d", &(d));
    solve(i, d);
  }

  return 0;
}


void solve(int n, int d)
{
  int a = 1;
  int b = d-1;

  while (a < b)
  {
    if (clean(a) && clean(b)) break;
    a++;
    b--;
  }
  
  printf("Case #%d: %d %d\n", n+1, a, b);
}


inline int clean(int a)
{
  while (a)
  {
    if ( (a%10) == 4 ) return 0;
    a /= 10;
  }
  return 1;
}
