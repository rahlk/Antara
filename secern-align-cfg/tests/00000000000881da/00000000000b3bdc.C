#include<stdio.h>
#include<string.h>
int main ()
{
  int i, j, n, size;
  char s[10000];
  scanf ("%d", &n);
  for (j = 0; j < n; j++)
    {
      scanf ("%d", &size);
      scanf ("%s", s);
      for (i = 0; i < strlen (s); i++)
	{
	  if (s[i] == 'E')
	    s[i] = 'S';
	  else
	    s[i] = 'E';
	}
      printf ("Case #%d: %s\n", j + 1, s);
    }
}
