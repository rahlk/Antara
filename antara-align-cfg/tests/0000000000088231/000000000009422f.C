#include <stdio.h>

char *n2str(char n[])
{
  int i;
  for(i=0;n[i]=='0';i++);
  return &n[i];
}

int main()
{
  int ncases, c, i;
  char n[102], a[102], b[102];
  scanf("%d", &ncases);
  for(c=0;c<ncases;c++)
    {
      scanf("%s", n);
      for(i=0;n[i];i++)
	    {
	        a[i] = n[i];
	        b[i] = '0';
	        if(n[i] == '4')
	            a[i] = b[i] = '2';
	    }
      a[i] = b[i] = '\0';
      printf("Case #%d: %s %s\n", c+1, n2str(a), n2str(b));
    }
}
