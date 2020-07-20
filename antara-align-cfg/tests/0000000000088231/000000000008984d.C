#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)
#pragma warning(disable: 4267)

int main(void) {

  int t, T;
  char A[102];
  char B[102];
  scanf("%d", &T);

  for (t = 1; t <= T; t++) {
    int a = 0, b = 0;
    printf("Case #%d: ", t);
    scanf("%s", A);
    int alen = strlen(A);
    for (a = 0; a < alen; ++a) {
      if (A[a] == '4') {
        A[a] = '2';
        B[b] = '2';
        ++b;
      }
      else {
        if (b) {
          B[b] = '0';
          ++b;
        }
      }
      B[b] = 0;
    }
    printf("%s %s\n", A, B);
  }
}
