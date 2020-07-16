/*int main(int argc,char **argv);*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// #define FILEIO

int map[20][20];
int R, C;

int isPrint = 0;
int isStop = 0;
int caseNumber = 0;

int isFull() {
  for (int m = 0; m<R; m++) {
    for (int n = 0; n<C; n++) {
      if (map[m][n] == 0) {
        return 0;
      }
    }
  }

  return 1;
}

void jump(int t1, int t2) {
  map[t1][t2] = 1;

  if (isFull() == 1) {
    isPrint = 1;
    isStop = 1;
    printf("Case #%d: POSSIBLE\n", caseNumber);
    return;
  }

  for (int m = 0; m<R; m++) {
    for (int n = 0; n<C; n++) {
      if (isStop == 1) return;

      if (m == t1
          || n == t2
          || (m - n) == (t1 - t2)
          || (m + n) == (t1 + t2)
          ) {
        continue;
      }
      else if (map[m][n] == 0) {

        jump(m, n);
        if (isPrint == 1) {
          printf("%d %d\n", m + 1, n + 1);
          return;
        }
      }
    }
  }
  map[t1][t2] = 0;
}

int main(int argc, char **argv)
{

#ifdef FILEIO
  freopen("RA2019in.txt", "r", stdin);
  freopen("RA2019out.txt", "w", stdout);
#endif

  int T;

  scanf("%d\n", &T);

  for (int i = 1; i <= T; i++)
    {
      caseNumber = i;
      scanf("%d", &R);
      scanf("%d", &C);

      memset(map, 0, 20 * 20 * sizeof(int));

      for (int m = 0; m<R; m++) {
        for (int n = 0; n<C; n++) {
          map[m][n] = 0;
        }
      }

      isPrint = 0;
      isStop = 0;

      for (int m = 0; m<R; m++) {
        for (int n = 0; n < C; n++) {

          if (map[m][n] == 0) {
            jump(m, n);

            if (isPrint == 1) {
              printf("%d %d\n", m + 1, n + 1);
              break;
            }
          }
        }
      }

      if (isPrint == 0) {
        printf("Case #%d: IMPOSSIBLE\n", i);
      }
      // printf("Case #%d: OK\n", i);
    }

#ifdef FILEIO
  fclose(stdin);
  fclose(stdout);
#endif  

  return 0;
}
