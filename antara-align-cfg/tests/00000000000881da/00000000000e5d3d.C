#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  int qnt, dim;
  scanf("%d", &qnt);
  char *lidia, *path, *sol;
  for (int t = 1; t <= qnt; t++) {
      scanf("%d", &dim);
      lidia = (char *)malloc((2*dim-2)*sizeof(char));
      path = (char *)malloc((2*dim-2)*sizeof(char));
      sol = path;
      scanf("%s\n", lidia);
      while (*lidia != '\0') {
          if(*lidia = 'E')
              *path = 'S';
          else
              *path = 'E';
          lidia++;
          path++;
      }

      printf("Case #%d: %s\n", t, sol);
  }

  return 0;
}
