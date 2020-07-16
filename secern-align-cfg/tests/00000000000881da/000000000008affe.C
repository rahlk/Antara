#include <stdio.h>

int main() {
  int N,T;
  int i, j;
  char c;
  scanf("%d\n", &T);
  for(i = 0; i < T; i++) {
    scanf("%d\n", &N);
    for(j = 0; j < (2*N-2); j++) {
      scanf("%c", &c);
      if(c == 'S') printf("E");
      else printf("S");
    }
    //scanf("\n");
    printf("\n");
  }
  return 0;
}
