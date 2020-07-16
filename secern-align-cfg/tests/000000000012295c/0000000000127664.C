#include <stdio.h>
#include <stdlib.h>
 
int main() {

  int t, T, P, Q, Xi, Yi, i, j, *grid;
  char d;
  
  scanf("%d", &T);
  for(t = 1; t<=T; t++) {
    scanf("%d %d", &P, &Q);
    grid = malloc((Q+1) * (Q+1) * sizeof(int));
    for(i = 0; i < (Q+1) * (Q+1); i++) grid[i] = 0;
    for(i = 0; i < P; i++) {
      scanf("%d %d", &Xi, &Yi);
      j = Xi * (Q+1) + Yi;
      d = getchar();
      d = getchar();
      if(d == 'N')
        while(++Yi <= Q)
          for(j = 0; j <= Q; j++) grid[j * (Q+1) + Yi]++;
      if(d == 'S')
        while(--Yi >= 0) 
          for(j = 0; j <= Q; j++) grid[j * (Q+1) + Yi]++;
      if(d == 'E') 
        while(++Xi <= Q) 
          for(j = 0; j <= Q; j++) grid[Xi * (Q+1) + j]++;
      if(d == 'W')
        while(--Xi >= 0)
	  for(j = 0; j <= Q; j++) grid[Xi * (Q+1) + j]++;
    }
    int max = 0;
    int pos = -1;
    for(i = 0; i < (Q+1) * (Q+1); i++) {
    	if(grid[i] > max) {
	  max = grid[i];
	  pos = i;
	}
    }
   printf("Case #%d: %d %d\n",t, pos/(Q+1), pos%(Q+1)); 
   free(grid);
 }

  return 0;
}
