#include <stdio.h>
#include <stdlib.h>

#define MAX_P 510
#define MAX_Q 100010

int main(){
  int t, p, q;
  int x_position;
  int y_position;
  char direction;
  int* marked_x;
  int* marked_y;
  int x, y;
  int max_x, max_y;
  int i, j, k;

  marked_x = malloc(MAX_Q*sizeof(int));
  marked_y = malloc(MAX_Q*sizeof(int));


  scanf("%d", &t);

  for(i = 0; i < t; i++){
    scanf("%d %d", &p, &q);

    for(j = 0; j < q+1; j++){
      marked_x[j] = 0;
      marked_y[j] = 0;
    }

    for(j = 0; j < p; j++){
      scanf("%d %d %c", &x_position, &y_position, &direction);
      switch(direction){
      case 'N':
        for(k = y_position + 1; k < q+1; k++){
          marked_y[k]++;
        }
        break;
      case 'S':
        for(k = y_position -1; k > 0; k--){
          marked_y[k]++;
        }
        break;
      case 'E':
        for(k = x_position + 1; k < q+1; k++){
          marked_x[k]++;
        }
        break;
      case 'W':
        for(k = x_position -1; k > 0; k--){
          marked_x[k]++;
        }
        break;
      }
    }
    x = 0;
    y = 0;
    max_x = 0;
    max_y = 0;

    for(j = 0; j < q+1; j++){
      if(marked_x[j] > max_x){
        max_x = marked_x[j];
        x = j;
      }
      if(marked_y[j] > max_y){
        max_y = marked_y[j];
        y = j;
      }
    }

    printf("Case #%d: %d %d\n", i+1, x, y);

  }

  free(marked_x);
  free(marked_y);
  return 0;
}
