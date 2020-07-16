#include <stdio.h>

#pragma warning(disable: 4996)
#pragma warning(disable: 4267)

int windmills[7] = { 2, 3, 5, 7, 11, 13, 17 };
int count[7];


int main(void) {
  int i, k, g;
  int t, T;
  int N, M;
  int result;
  int solution_found;
  scanf("%d", &T);
  //fprintf(stderr, "T = %d\n", T);
  scanf("%d", &N);
  scanf("%d", &M);
  for (t = 1; t <= T; t++) {
    for (i = 0; i < 7; i++) {
      count[i] = 0;
      for (k = 0; k < 18; k++) {
        printf("%d ", windmills[i]);
        //fprintf(stderr, "%d", windmills[i]);
      }
      printf("\n");
      fflush(stdout);
      for (k = 0; k < 18; k++) {
        scanf("%d", &g);
        count[i] += g;
      }
    }
    for (g = 1; g <= M; g++) {
      solution_found = 1;
      for (i = 0; i < 7; i++) {
        if (g % windmills[i] != count[i] % windmills[i]) solution_found = 0;
      }
      if (solution_found) break;
    }
    //printf("%d\n", g);
    printf("%d", g);
    printf("\n");
    fflush(stdout);
    scanf("%d", &result);
    if (result == -1) break;
  }
}
