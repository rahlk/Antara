#include <stdio.h>
#include <stdbool.h>

int T, R, C;
bool galaxy[20][20];

bool search(int r, int c, int k) {
  if(k == R*C) {
    printf("POSSIBLE \n");
    return 1;
  }
  for(int i = 0; i < R; i++) {
    for(int j = 0; j < C; j++) {
      if((r == i || j == c || r-c == i-j || r+c == i+j || galaxy[i][j]) &&  k > 0) continue;
      galaxy[i][j] = 1;
      if(search(i, j, k+1)) {
        printf("%d %d \n", i+1, j+1);
        galaxy[i][j] = 0;
        return 1;
      }
      galaxy[i][j] = 0;
    }
  }
  return 0;
}

int main() {
  scanf("%d", &T);
  for(int t = 1; t <= T; t++) {
    scanf("%d%d", &R, &C);
    printf("Case #%d: ", t);
    if(!search(0,0,0)) printf("IMPOSSIBLE \n");
  }
}
