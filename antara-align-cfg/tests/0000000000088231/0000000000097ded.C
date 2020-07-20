#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>



int main (){
  int t, i, j, k, m;
  char n[200];

  scanf ("%d", &t);

  i = 0;

  do{
    fgets (n, 200, stdin);
    m = atoi(n);
    j = m/4;
    k = m-j;
    char *a = strchr(n, '4');

    while (a != NULL){
      while (j < m/2){
        if ((j + k) == m){
          printf ("Case #%d: %d %d\n", i, j, k);
          a = NULL;
          break;
        }
        j++;
        k--;
      }
    }

    i++;
  } while (i <= t);

  return 0;
}