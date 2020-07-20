#include <stdio.h>

long long has_four(long long n)
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
  long long T, N, tmp;
  int i;

  scanf("%lld", &T);

  for(i = 1; i <= T; ++i)
  {
    scanf("%lld", &N);

    tmp = 1;

    while(tmp < N / 2)
    {
      if(!has_four(tmp) && !has_four(N - tmp))
        break;

      tmp++;
    }

    printf("Case #%d: %lld %lld\n", i, tmp, N - tmp);
  }

  return 0;
}
