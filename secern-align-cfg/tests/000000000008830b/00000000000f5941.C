#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void factor(int n, int *a, int *b)
{
  int i;
  if(n % 2 == 0)
    *a = 2;
  else
    {
      for(i=3;n%i;i+=2);
      *a = i;
    }
  *b = n / *a;
}

int cmp(const void *ap, const void *bp)
{
  int a = *(int*)ap, b = *(int*)bp;
  if(a == b) return 0;
  return a < b ? -1 : 1;
}

int main()
{
  int ncases, c, len, maxprime, product[100], primes[26], nprime, f[100][2], i, j;
  char map[10000];
  scanf("%d", &ncases);
  for(c=0;c<ncases;c++)
    {
      memset(map, 0, 10000);
      nprime = 0;
      scanf("%d %d", &maxprime, &len);
      for(i=0;i<len;i++)
	{
	  scanf("%d", &product[i]);
	  factor(product[i], &f[i][0], &f[i][1]);
	  for(j=0;j<2;j++)
	    {
	      if(!map[f[i][j]-1])
		{
		  primes[nprime++] = f[i][j];
		  map[f[i][j]-1] = -1;
		}
	    }
	}
      qsort(primes, 26, sizeof(int), cmp);
      for(i=0;i<26;i++)
	map[primes[i]-1] = i;
      j = (f[0][0] == f[1][0] || f[0][0] == f[1][1]) ? f[0][1]:f[0][0];
      printf("Case #%d: %c", c+1, 'A'+map[j-1]);
      for(i=0,j=f[0][0];i<len;i++)
	{
	  j = f[i][0]==j ? f[i][1]:f[i][0];
	  putchar('A'+map[j-1]);
	}
      putchar('\n');
    }
}
