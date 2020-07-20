#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>



int main (){
  int t, i, j, k, m, b, c, d;
  char n[200];

  scanf ("%d", &t);

  i = 0;

  do{
    fgets (n, 200, stdin);
    m = atoi(n);
    k = m-1;
    char *a = strchr(n, '4');

    while (a != NULL){
      for (j = 1; j < m/2; j++){
        if ((j + k) == m){
          printf ("Case #%d: %d %d\n", i, j, k);
          a = NULL;
          break;
        }
        k--;
      }
    }

    i++;
  } while (i <= t);

  return 0;
}