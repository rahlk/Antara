#include <stdio.h>

long has_four(long n)
{
  int tmp;

  while(n)
  {
    tmp = n % 10;

    if (tmp == 4)
      return 1;

    n /= 10;
  }

  return 0;
}

int main(int argc, char *argv[])
{
  long T, N, tmp;
  int i;

  scanf("%ld", &T);

  for(i = 1; i <= T; ++i)
  {
    scanf("%ld", &N);

    tmp = 1;

    while(tmp < N / 2)
    {
      if(!has_four(tmp) && !has_four(N - tmp))
        break;

      tmp++;
    }

    printf("Case #%d: %ld %ld\n", i, tmp, N - tmp);
  }

  return 0;
}
