/*
  ============================================================================
  Name        : 2019-0-A.c
  Author      : OverLord
  ============================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void calc()
{
  int i;
  char N[101], R[101];

  scanf("%s", N);

  int L = strlen(N);

  for (i = 0; i < L; i++)
  {
    if (N[i] == '4')
    {
      N[i] = '3';
      R[i] = '1';
    }
    else
      R[i] = '0';
  }

  R[L] = 0;

  printf("%s %s\n", N, R);
}


int main(void)
{
  //freopen("input", "r", stdin);
  //freopen("output", "w", stdout);

  int T;

  scanf("%d", &T);

  for (int t = 1; t <= T; t++)
  {
    printf("Case #%d: ", t);
    calc();
  }

  return EXIT_SUCCESS;
}
