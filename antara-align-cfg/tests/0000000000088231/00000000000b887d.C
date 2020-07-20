#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char **argv) {

  char *a, *b;
  for (int t = 2; t < argc; t++) {
      char *snd;
      snd = (char *) malloc(sizeof(argv[t]));
      a = argv[t];
      b = snd;
      while (*argv[t] != '\0') {
            if(*argv[t] == '4') {
                *argv[t] = '3';
                *snd = '1';
            } else
                *snd = '0';
            argv[t]++;
            snd++;
      }
      while (*b != '1') {
        b++;
      }
      printf("Case #%d: %s %s\n", (t-1), a, b );
  }

  return 0;
}
