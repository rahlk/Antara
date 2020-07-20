#include <stdio.h>

int main()
{
  int t, j;
  scanf("%d", &t);
  for (j = 0; j < t; j++)
  {
    int N, i;
    scanf("%d", &N);
    int char_limit = 2 * N - 2;
    char lyd[char_limit];
    char you[char_limit];
    int x = 0, y = 0, p = 0, q = 0;
    scanf("%s", lyd);
    for (i = 0; i < char_limit; i++)
    {
      if (x == p && y == q)
      {
        if (lyd[i] == 'S')
        {
          q++;
          x++;
          you[i] = 'E';
        }
        else
        {
          p++;
          y++;
          you[i] = 'S';
        }
      }
      else
      {
        if (lyd[i - 1] == 'S')
        {
          p++;
          you[i] = 'S';
        }
        else
        {
          q++;
          you[i] = 'E';
        }
        if (lyd[i] == 'S')
        {
          x++;
        }
        else
        {
          y++;
        }
      }
    }
    printf("Case #%d: %s\n", j + 1, you);
  }
}