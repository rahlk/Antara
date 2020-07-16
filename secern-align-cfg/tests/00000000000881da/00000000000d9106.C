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
  int i, N;

  scanf("%d", &N);

  char P[2 * N - 1];

  scanf("%s", P);

  for (i = 0; i < 2 * N - 2; i++)
  {
    if (P[i] == 'S')
      P[i] = 'E';
    else
      P[i] = 'S';
  }

  printf("%s\n", P);
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
