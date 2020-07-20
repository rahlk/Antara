#include <stdio.h>

char P[10001];
int T;

void inReverse(int length) {
  for(int j = 0; j < length; j++) {
    if(P[j] == 'E') printf("S");
    else printf("E");
  }
  printf("\n");
}

int main() {
  scanf("%d", &T);
  for(int i = 1; i <= T; i++) {
    int N;
    scanf("%d", &N);
    scanf("%s", &P);
    printf("Case #%d: ", i);
    inReverse(2*N-2);
  }
}
