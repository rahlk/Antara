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
  bool bx = false;

  scanf ("%d", &t);

  i = 1;

  do{
    scanf("%s", &n);
    m = atoi(n);
    j = m/2;
    k = m-j;
    char *a = strchr(n, '4');

    while (a != NULL){
      while (j > 0){
        if ((j + k) == m){
          char b[200], c[200];
          sprintf(b, "%d", j);
          sprintf(c, "%d", k);
          int x;
          x = 0;
          while ((b[x] != '\0') || (c[x] != '\0')){
            if (b[x] == '4'){
              b[x] = '3';
              bx = true;
            }
            if (c[x] == '4'){
              c[x] = '5';
            } else if(c[x] == '5' && bx == true) {
              c[x] = '6';
            }
            x++;
          }
          j = atoi(b);
          k = atoi(c);
          printf ("Case #%d: %d %d\n", i, j, k);
          a = NULL;
          break;
        }
        j--;
        k++;
      }
    }
    i++;
  } while (i <= t);

  return 0;
}