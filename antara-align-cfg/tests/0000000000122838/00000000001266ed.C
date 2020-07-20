#include <stdio.h>

int abs(int n)
{
  return n >= 0 ? n : -n;
}

int main()
{
  int ncases, ca, nswords, maxdiff, c[100], d[100], cmax, dmax, fair, i, j, k;
  scanf("%d", &ncases);
  for(ca=0;ca<ncases;ca++)
    {
      scanf("%d %d", &nswords, &maxdiff);
      for(i=0;i<nswords;i++)
	scanf("%d", &c[i]);
      for(i=0;i<nswords;i++)
	scanf("%d", &d[i]);
      fair = 0;
      for(i=0;i<nswords;i++)
	{
	  for(j=i;j<nswords;j++)
	    {
	      for(cmax=dmax=0,k=i;k<=j;k++)
		{
		  if(c[k] > cmax) cmax = c[k];
		  if(d[k] > dmax) dmax = d[k];
		}
	      if(abs(cmax-dmax) <= maxdiff)
		fair++;
	    }
	}
      printf("Case #%d: %d\n", ca+1, fair);
    }
}
