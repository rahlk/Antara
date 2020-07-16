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

  i = 0;

  do{
    fgets (n, 200, stdin);
    m = atoi(n);
    j = m/2;
    k = m-j;
    char *a = strchr(n, '4');

    while (a != NULL){
      while (j > 0){
        if ((j + k) == m){
          printf ("Case #%d: ", i);
          char b[200], c[200];
          sprintf(b, "%d", j);
          sprintf(c, "%d", k);
          int x;
          x = 0;
          while (b[x] != '\0'){
            if (b[x] == '4'){
              printf("3");
              bx = true;
            } else {
              printf("%c",b[x]);
            }
            x++;
          }
          printf(" ");
          x = 0;
          while (c[x] != '\0'){
            if (c[x] == '4'){
              printf("5");
            } else if(c[x] == '5' && bx == true) {
              printf("6");
            } else {
              printf("%c",c[x]);
            }
            x++;
          }
          printf("\n");
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