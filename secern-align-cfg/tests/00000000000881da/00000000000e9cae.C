#include <stdio.h>
#include <string.h>

#define N (1007L)

char S[N];

int main() {
  int t;
  scanf("%d", &t);
  
  for (int i = 1; i <= t; ++i) {
    memset(S, 0, N);
    int n;
    scanf("%d", &n);
    scanf("%s", S);
    
    printf("Case #%d: ", i);

    n = strlen(S);

    for (int j = 0; j < n; ++j) {
      if (S[j] == 'S') 
        printf("E");
      else
        printf("S");
    }

    puts("");
  }

  return 0;
}
