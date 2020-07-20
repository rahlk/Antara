#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int g_x = 0;
int g_y = 0;

int min(int a, int b)
{
  return ((a<b)?a:b);
}

void get_direction(int x, int y, char dir, int *xx, int *yy, int max)
{
  switch(dir) {
    case 'E':
      *yy = 0;
      *xx = min(max, x+1);
    break;
    case 'W':
      *yy = 0;
      *xx = 0;
    break;
    case 'N':
      *xx = 0;
      *yy = min(max, y+1);
    break;
    case 'S':
      *xx = 0;
      *yy = 0;
    break;

  }

  if (g_x == 0) {
    g_x = *xx;
  } else if(*xx !=0) {
    g_x = min(g_x, *xx);
  }

  if (g_y == 0) {
    g_y = *yy;
  } else if(*yy !=0){
    g_y = min(g_y, *yy);
  }
}



int main()
{

  int T;
  int P, Q;
  int curr_T = 1;
  scanf("%d", &T);

  for (curr_T = 1; curr_T <= T; curr_T++) {
    scanf("%d %d", &P, &Q);
    g_x = 0;
    g_y = 0;
    //int curr_P = 1;
    for (int curr_P = 1; curr_P <= P; curr_P++) {
      int x, y, xx, yy;
      char dir;
      scanf("%d %d %c", &x, &y, &dir);
      get_direction (x, y, dir, &xx, &yy, Q);

    }

    printf("Case #%d: %d %d\n", curr_T, g_x, g_y);

  }

  return 0;
}