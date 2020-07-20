#include <stdio.h>

int main() {
  int t, t1;
  scanf("%d", &t);
  t1 = t;
  while (t--) {
    printf("Case #%d: ", t1 - t);
    long long int i, a, b1, c[12394] = {0}, b[87754] = {0}, j = 0, k = 1, l = 1,
                            y[45677] = {0}, temp = {0}, w[12344] = {0};
    scanf("%lld %lld", &a, &b1);
    for (i = 0; i < b1; i++) {
      scanf("%lld", &c[i]);
    }
    for (i = 0; i < b1; i++) {
      for (j = 3; j <= a; j++) {
        if (c[i] % j == 0) {
          b[k++] = j;
          b[k++] = c[i] / j;

          break;
        }
      }
    }
    for (i = 1; i < k - 2; i += 2) {
      if (i % 2 != 0) {
        if (b[i + 2] == b[i]) {
          b[i] = 0;
        } else if (b[i] == b[i + 3]) {
          b[i + 3] = b[i + 2];
          b[i + 2] = b[i];
          b[i] = 0;
        } else {
        }
      } else {
        if (b[i] == b[i + 1]) {
          b[i] = 0;
        } else if (b[i] == b[i + 2]) {
          b[i + 2] = 0;
        } else {
        }
      }
    }
    for (i = 0; i < k; i++) {
      if (b[i] != 0) {
        y[l++] = b[i];
      }
    }
    l = 1;
    for (i = 1; i < k; i++) {
      if (y[i + 1] != y[i]) {
        b[l] = y[i];
        c[l++] = y[i];
      }
    }
    for (i = 1; i < l; i++) {
      temp = b[i];
      j = i - 1;

      while (j >= 0 && b[j] > temp) {
        b[j + 1] = b[j];
        j = j - 1;
      }
      b[j + 1] = temp;
    }
    j = 1;
    for (i = 1; i < l; i++) {
      if (b[i] != b[i + 1])
        w[j++] = b[i];
    }
    for (j = 1; j < b1 + 2; j++) {
      for (i = 1; i < l; i++) {
        if (c[j] == w[i]) {
          printf("%c", (char)i + 64);
        }
      }
    }
    printf("\n");
  }
}
