#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  char *c;
  int ni;
  int w;
  int n;
  
  w = 1;
  scanf("%d",&ni);
  while(ni > 0)
  {
    scanf("%d",&i);
    c = (char *)malloc(i * sizeof(char));
    scanf("%s",c);
    n = 0;
    while(c[n])
    {
        if(c[n] == 'S')
            c[n] = 'E';
        else
            c[n] = 'S';
        n++;
    }
    printf("Case #%d: ",w);
    puts(c);
    free(c);
    ni--;
    w++;
  }
  return 0;
}