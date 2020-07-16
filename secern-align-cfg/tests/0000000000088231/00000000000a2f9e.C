#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv)
{
  int i, j, k, n, c, T;
  char S[200];
  char S0[200];
  char S1[200];

  scanf("%d", &T);

  for(i=1;i<=T;i++) {
    scanf("%s", S);

    memset(S0, 0, sizeof(S0));
    memset(S1, 0, sizeof(S1));

    for(j=0,k=0,c=0;S[j];j++) {
      if (j == 0 && S[j] == '1') {
        c = 1;
        continue;
      }
      n = c*10 + S[j] - '0';
      S0[k] = n/2 + '0' + (n % 2);
      S1[k] = n/2 + '0';
      k++;
      c = 0;
    }

    for(j=0;S0[j];j++) {
      if (S0[j] == '4' || S1[j] == '4') {
        S0[j]++;
        S1[j]--;
      }
    }

    printf("Case #%d: %s %s\n", i, S0, S1);
  }
  return 0;
}
