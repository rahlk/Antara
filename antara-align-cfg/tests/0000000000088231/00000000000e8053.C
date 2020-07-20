#include <stdio.h>
#include <err.h>

int foo(int x) {
  while (x) {
    int y = x % 10;
    if (y == 4)
      return 1;
    x /= 10;
  }
  return 0;
}

struct pair {
  int a, b;
};

struct pair solve(int n) {
  for (int i = 1; i <= n; ++i) {
    if (!foo(i) && !foo(n - i)) {
      struct pair r = {.a = i, .b = n - i};
      return r;
    }
  }

  err(1, "???");
}


int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i) {
    int n;
    scanf("%d", &n);
    struct pair r = solve(n);
    printf("Case #%d: %d %d\n", i, r.a, r.b);
  }
  return 0;
}
