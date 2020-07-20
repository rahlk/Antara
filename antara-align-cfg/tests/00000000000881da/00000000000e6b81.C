#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  int qnt, dim;
  scanf("%d", &qnt);
  char *lidia, *sol;
  for (int t = 1; t <= qnt; t++) {
      scanf("%d", &dim);
      lidia = (char *)malloc((2*dim)*sizeof(char));
      sol = lidia;
      scanf("%s\n", lidia);
      while (*lidia != '\0') {
          if(*lidia == 'E')
              *lidia = 'S';
          else
              *lidia = 'E';
          lidia++;
      }

      printf("Case #%d: %s\n", t, sol);
  }

  return 0;
}
