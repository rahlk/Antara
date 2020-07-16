#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  int qnt;
  scanf("%d", &qnt);
  char *a, *b, *nmb, *snd;
  for (int t = 1; t <= qnt; t++) {
      nmb = (char *)malloc(1000000000*sizeof(char));
      snd = (char *)malloc(1000000000*sizeof(char));
      scanf("%s\n", nmb);
      a = nmb;
      b = snd;
      while (*nmb != '\0') {
            if(*nmb == '4') {
                *nmb = '3';
                *snd = '1';
            } else
                *snd = '0';
            nmb++;
            snd++;
      }
      while (*b != '1') {
        b++;
      }
      printf("Case #%d: %s %s\n", t, a, b );
  }

  return 0;
}
