#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>



int main (){
  long long t, i, j, k, m;
  char n[200];
  bool bx = false;

  scanf ("%lld", &t);

  i = 1;

  do{
    scanf("%s", &n);
    m = atol(n);
    j = m/2;
    k = m-j;
    char *a = strchr(n, '4');

    while (a != NULL){
      while (j > 0){
        if ((j + k) == m){
          char b[200], c[200];
          sprintf(b, "%lld", j);
          sprintf(c, "%lld", k);
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
          j = atol(b);
          k = atol(c);
          printf ("Case #%lld: %lld %lld\n", i, j, k);
          //printf ("%lld\n", j+k);
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