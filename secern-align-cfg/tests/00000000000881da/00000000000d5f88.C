#include <stdio.h>
#define MAXN 1000
char path[2 * MAXN - 2];
char pathRes[2 * MAXN - 2];

void result(int N, char path[]) {
  int i;
  for(i = 0; i < (2 * N - 2); i++) pathRes[i] = (path[i]=='S') ? 'E' : 'S';
  printf("%s\n", pathRes);
}

int main() {
  int i, count, T, N;
  scanf("%d", &T);
  for(count = 1; count <= T; count++) {
    scanf("%d", &N); scanf("%s", path);
    printf("Case #%d: ", count);
    result(N, path);
  }
  return 0;
}
