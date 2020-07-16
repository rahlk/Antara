#include <stdio.h>
#include <string.h>

int main() {
  int numCases;
  int garbage;
  char lydia[100000];
  char me[100000];

  scanf("%d", &numCases);

  for (size_t i = 0; i < numCases; i++) {
    scanf("%d", &garbage);
    scanf("%s", lydia);

    for (size_t j = 0; j < strlen(lydia); j++) {
      if (lydia[j] == 'E')
        me[j] = 'S';
      else
        me[j] = 'E';
    }

    me[strlen(lydia)] = '\0';

    printf("Case #%d: %s\n", i + 1, me);
    me[0] = lydia[0] = '\0';
  }

  return 0;
}