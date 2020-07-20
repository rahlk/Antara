#include <stdio.h>

int main() {
  int T, t;
  scanf("%d\n", &T);
  for (t=1; t<=T; t++) {
    int N, i;
    scanf("%d\n", &N);
    char path[N<<1];
    gets(path);
    printf("Case #%d: ", t);
    for (i=0; i<N*2-2; i++)
      printf("%c", 'S'+'E'-path[i]);
    printf("\n");
  }
} 