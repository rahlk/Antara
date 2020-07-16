#include <stdio.h>
#include <stdlib.h>

int main() {

  int T, t, N, i;
  char *P, c;

  P = malloc(50001 * sizeof(char));

  scanf("%d\n", &T);
  for(t = 1; t <= T; t++) {
    scanf("%d\n", &N);
    for(i = 0; i <= 2*N - 3; i++) {
      scanf("%c", &c);
      if(c == 'S') P[i] = 'E';
      else P[i] = 'S';
    }
    P[2*N - 2] = '\0';
    printf("Case #%d: %s\n", t, P);
  }

  return 0;
}
