#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 101

char buff[N];
char a[N];
char b[N];

void solve() {
  memset(buff, 0, N);
  memset(a, 0, N);
  memset(b, 0, N);

  scanf("%s", buff);
  int len = (int) strlen(buff);

  for (int i = 0; i < len; ++i) {
    if (buff[i] == '4') {
      a[i] = '3';
      b[i] = '1';
    }
    else {
      a[i] = buff[i];
      b[i] = '0';
    }
  }

  printf("%d %d\n", atoi(a), atoi(b));
}


int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; ++i) {
    int n;
    printf("Case #%d: ", i);
    solve();
  }
  return 0;
}
