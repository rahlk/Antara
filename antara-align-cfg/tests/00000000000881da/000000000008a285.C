#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)
#pragma warning(disable: 4267)

int main(void) {

  int t, T;
  char A[100000];
  scanf("%d", &T);

  for (t = 1; t <= T; t++) {
    int a = 0;
    int n;
    printf("Case #%d: ", t);
    scanf("%d", &n);
    scanf("%s", A);
    int alen = strlen(A);
    for (a = 0; a < alen; ++a) {
      if (A[a] == 'S') {
        A[a] = 'E';
      } else {
        A[a] = 'S';
      }
    }
    printf("%s\n", A);
  }
}
