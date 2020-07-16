#include <stdio.h>
#include <string.h>
int main() {
  int N,T;
  int i, j, len;
  char s[20004];
  scanf("%d\n", &T);
  for(i = 0; i < T; i++) {
    scanf("%d\n", &N);
    fgets(s, 20004, stdin);
    len = strlen(s);
    len -= 1;
    for(j = 0;j<len;j++) {
      if(s[j] == 'E') printf("S");
      else if(s[j] == 'S') printf("E");
    }
    printf("\n");
  }
  return 0;
}
