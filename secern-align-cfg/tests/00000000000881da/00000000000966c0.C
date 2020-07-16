#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main (){
  int t, i, n, j;
  scanf ("%d", &t);
  i = 1;

  do{
    scanf("%d", &n);
    int p = 2*n -2;
    char pl[p];
    char pu[p];
    scanf("%s",&pl);
    for (j = 0; j < p; j++){
      if (pl[j] == 'E'){
        printf("S");
      } else {
        printf("E");
      }
    }
    i++;
  } while (i <= t);
  return 0;
}