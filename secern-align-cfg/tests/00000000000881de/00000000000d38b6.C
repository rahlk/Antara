#include <assert.h>
#include <stdio.h>
#include <string.h>

int n, b, f;
char output[5][1024];
char test_store[5][1024];
int counts[5][1024];

void init() {
  for (int i = 5; i >= 1; i--) {
    int interval = 1 << (i - 1);
    for (int j = 0; j * interval < 1024; j++) {
      char t = (j % 2 == 0) ? '0' : '1';
      for (int k = 0; k < interval; k++) {
        output[5 - i][j * interval + k] = t;
      }
    }
  }
}

void run() {
  memset(counts, 0, sizeof(counts));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < n; j++) {
      putchar(output[i][j]);
    }
    putchar('\n');
    fflush(stdout);
    scanf("%s", test_store[i]);
  }
  int interval = 16;
  int intervals = (n + interval - 1) / interval;
  int idx = 0;
  for (int j = 0; j < intervals; j++) {
    char t = (j % 2 == 0) ? '0' : '1';
    while (test_store[0][idx] == t) {
      idx++;
      counts[0][j]++;
    }
  }
  for (int i = 1; i < 5; i++) {
    int idx = 0;
    for (int j = 0; j < intervals; j++) {
      for (int k = 0; k < counts[i - 1][j]; k++) {
        counts[i][j * 2 + test_store[i][idx] - '0']++;
        idx++;
      }
    }
    interval = interval / 2;
    intervals = (n + interval - 1) / interval;
  }
  for (int i = 0; i < n; i++) {
    if (counts[4][i] == 0) {
      printf("%d ", i);
    }
  }
  putchar('\n');
  fflush(stdout);
  int tmp;
  scanf("%d", &tmp);
  assert(tmp == 1);
}

int main() {
  init();
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d%d%d", &n, &b, &f);
    run();
  }
}
