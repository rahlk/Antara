#include <stdio.h>
#include <stdlib.h>

int **newMap(int R, int C) {
  int j, i;
  int **map = (int **) malloc(sizeof(int *)*R);
  for(j = 0; j < R; j++) {
    map[j] = (int*) malloc(sizeof(int)*C);
    for(i = 0; i < C; i++) map[j][i] = 0;
  }
  return map;
}
void printSteps(int **steps, int R, int C) {
  int i;
  int x = R*C;
  for(i =0; i < x; i++) printf("%d %d\n", steps[i][0], steps[i][1]);
  return;
}

int diag(int a, int b, int x, int y) {
  int diff1 = a-x;
  int diff2 = b-y;
  if(diff1 < 0) diff1*=-1;
  if(diff2 < 0) diff2*=-1;
  if(diff1 == diff2) {
    //printf("(%d,%d) diag (%d,%d)\n", a+1,b+1,x+1,y+1);
    return 1;
  }
  else return 0;
}
int solveMap(int **map, int **steps, int R, int C, int count, int ri, int ci) {
  if(count >= R*C) return 1;
  int i,j;
  for(i = 0; i < R; i++) {
    if(i == ri) continue;
    for(j = 0; j < C; j++) {
      if(j == ci) continue;
      if(map[i][j] == 1) continue;
      if(diag(i,j,ri,ci) == 1) continue;
      map[i][j] = 1;
      //printf("trying (%d,%d) -> (%d,%d)\n", ri+1,ci+1,i+1, j+1);
      int x = solveMap(map, steps, R, C, count+1, i, j);
      if(x == 1) {
        steps[count][0] = i+1;
        steps[count][1] = j+1;
        return 1;
      }
      else {
        map[i][j] = 0;
      }
    }
  }
  return 0;
}
int main() {
  int T, R, C;
  int i, j;
  int **map, **steps;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d %d", &R, &C);
    map = newMap(R, C);
    steps = newMap(R*C, 2);
    if(solveMap(map, steps, R, C, 0, R/2, C/2) == 1) {
      printf("Case #%d: POSSIBLE\n", i+1);
      printSteps(steps, R, C);
    }
    else {
      printf("Case #%d: IMPOSSIBLE\n", i+1);
    }
  }
  return 0;
}
