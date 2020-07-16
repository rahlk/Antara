

#include <stdio.h>
#include <stdlib.h>



int best_skill(int *skills, int l, int r) {
  int x;
  int best = skills[l];

  for (x = l + 1; x <= r; x++) {
    if (best < skills[x])
      best = skills[x];
  }

  return best;
}

int count_l_r(int *C, int *D, int N, int K) {
  int fair = 0;
  int l, r;

  for (l = 0; l < N; l++) {
    for (r = l; r < N; r++) {
      int best_C = best_skill(C, l, r);
      int best_D = best_skill(D, l, r);

      // printf(".. for l=%d r=%d best_C=%d best_D=%d\n",
         // l, r, best_C, best_D);
      if (abs(best_C - best_D) <= K)
        fair++;
    }
  }

  return fair;
}

void exec_test_case(int cc) {
  int x, res;
  int N, K;
  int *C, *D;

  scanf("%d %d", &N, &K);

  // printf("N=%d\n", N);
  // printf("K=%d\n", K);

  /* read C's and D's */
  C = malloc(sizeof(N) * N);
  D = malloc(sizeof(N) * N);

  for (x = 0; x < N; x++) {
    scanf("%d", &C[x]);
  }

  for (x = 0; x < N; x++) {
    scanf("%d", &D[x]);
  }

  // printf("C = [ ");
  // for (x = 0; x < N; x++) {
    // printf(" %d ", C[x]);
  // }
  // printf("]\n");

  // printf("D = [ ");
  // for (x = 0; x < N; x++) {
    // printf(" %d ", D[x]);
  // }
  // printf("]\n");

  res = count_l_r(C, D, N, K);

  printf("Case #%d: %d\n", cc, res);
}

int main() {
  /* read test cases ahead */
  int x;
  int T;

  scanf("%d", &T);

  // printf("T=%d\n", T);  

  for (x = 0; x < T; x++) {
    // printf("== TEST CASE RUN %d ==\n", x);
    exec_test_case(x + 1);
  }

}

