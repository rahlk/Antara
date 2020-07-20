#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int q, t;
  scanf("%d ", &t);
  for (q = 0; q < t; q++) {
    int n;
    scanf("%d ",&n);
    
    char arr[1000006] = {0};
    char brr[1000006] = {0};
    char c;
    int a = 0, b = 0, i = 0;
    while (scanf("%c", &c) > 0) {
      if (c == '\n' || c == ' ' || c == 0) {
        break;
      }
      if (c == 'S') {
        arr[a] = 'E';
        brr[a] = '2';
      } else {
        arr[a] = 'S';
        brr[a] = '0';
      }
      a++;
    }
    printf("Case #%d: ", q + 1);
    for (i = 0; i < a; i++) {
      printf("%c", arr[i]);
    }
    /*
    printf(" ");
    for (i = 0; i < a; i++) {
      printf("%c", brr[i]);
    }
    */
    printf("\n");
  }
}
