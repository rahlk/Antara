#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int tests;
  scanf("%d", &tests);

  int index = 1;

  while (tests > 0) {
    char buffer[120] = { 0 }, a[120] = { 0 }, b[120] = { 0 };
    scanf("%s", &buffer);

    int i = 0;
    int offset = 0;
    bool flag = false;

    while (buffer[i] != '\0') {
      if (buffer[i]  == '4') {
        a[i] = '2';
        b[i] = '2';

        flag = true;
      } else {
        a[i] = buffer[i];
        b[i] = '0';

        if (!flag) offset++;
      }

      i++;
    }

    if (b[offset] == '\0')
      offset--;

    printf("Case #%d: %s %s\n", index++, a, &(b[offset]));
    fflush(stdout);
    tests--;
  }

  return 0;
}