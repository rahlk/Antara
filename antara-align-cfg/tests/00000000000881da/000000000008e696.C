#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int tests;
  scanf("%d", &tests);

  int index = 1;
  while (tests-- > 0) {
    char path[100000] = { 0 };
    int size;
    scanf("%d", &size);
    scanf("%s", &path);

    printf("Case #%d: ", index++);
    for (int i = 0; path[i] != '\0'; i++) {
      printf("%c", path[i] == 'S' ? 'E' : 'S') ;
    }
    printf("\n");
    fflush(stdout);
  }
}
