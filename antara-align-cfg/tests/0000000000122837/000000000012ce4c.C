#include <stdio.h>

int main()
{
  int ncases, c, w, d, rings[6], init[6], rc[6], new, s, v, i, j;
  scanf("%d %d", &ncases, &w);
  if(w != 6)
    return 0;
  for(c=0;c<ncases;c++)
    {
      for(d=1;d<=6;d++)
	{
	  printf("%d\n", d);
	  fflush(stdout);
	  scanf("%d", &rings[d-1]);
	  if(rings[d-1] == -1)
	    return 0;
	}
      for(i=0;i<=100;i++)
	{
	  rc[0] = init[0] = i;
	  for(d=2;d<=6;d++)
	    {
	      new = rings[d-1] - rings[d-2];
	      for(j=1;j<d;j++)
		{
		  if(d % j == 0)
		    {
		      rc[j-1] *= 2;
		      new -= rc[j-1];
		    }
		}
	      if(new < 0) break;
	      rc[d-1] = init[d-1] = new;
	    }
	  if(new < 0) continue;
	  for(s=d=0;d<6;d++)
	    s += init[d];
	  if(s+init[0] == rings[0])
	    break;
	}
      printf("%d %d %d %d %d %d\n", init[0], init[1], init[2], init[3], init[4], init[5]);
      fflush(stdout);
      scanf("%d", &v);
      if(v != 1)
	return 0;
    }
    printf("\n");
}
