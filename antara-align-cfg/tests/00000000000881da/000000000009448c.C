#include <stdio.h>

int main()
{
  int ncases, c, size, i;
  char lydia[99999], foo;
  scanf("%d", &ncases);
  for(c=0;c<ncases;c++)
    {
      scanf("%d %s%c", &size, lydia, &foo);
      printf("Case #%d: ", c+1);
      for(i=0;lydia[i];i++)
        putchar('E'+'S'-lydia[i]);
      putchar('\n');
    }
}
