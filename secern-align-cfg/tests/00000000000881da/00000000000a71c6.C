#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv)
{
  int i, j, T, N;
  char S[200000], SS[200000];

  scanf("%d", &T);

  for(i=1;i<=T;i++) {
    scanf("%d", &N);
    scanf("%s", S);
    memset(SS, 0, sizeof(SS));

    for(j=0;S[j];j++) {
      if (S[j] == 'E') {
	SS[j] = 'S';
      } else {
	SS[j] = 'E';
      }
    }
    
    printf("Case #%d: %s\n", i, SS);
  }
  return 0;
}
