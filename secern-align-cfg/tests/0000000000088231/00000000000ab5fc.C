#include <stdio.h>
#include <string.h>

#define N 1 << 7

int main() {
  int m, n;
  int t, T;
  char * p;
  char s[N];
  char A[N];
  char B[N];
  t = 0;
  scanf("%i\n", &T);
  while (t++ < T) {
    memset(A, 0, N);
    memset(B, 0, N);
    fgets(s, N, stdin);
    n = strlen(s) - 1;
    for (m=0;m<n;m++) {
      if (s[m] == '4') {
        A[m] = '2';
        B[m] = '2';
      } else {
        A[m] = s[m];
        B[m] = '0';
      }
    }
    p = B;
    while (*p == '0') p++;
    printf("Case #%i: %s %s\n", t, A, p);
  }
  return 0;
}