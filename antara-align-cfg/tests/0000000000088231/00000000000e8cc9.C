#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buff[20];
char a[20];
char b[20];

void solve() {
  memset(buff, 0, 20);
  memset(a, 0, 20);
  memset(b, 0, 20);

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
