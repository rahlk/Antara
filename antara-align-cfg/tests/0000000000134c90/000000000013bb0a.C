#include <stdio.h>
#include <string.h>

#define MAX_A 256
#define MAX_C 501

int main() {
  int T; scanf("%d", &T);
  int id;

  int A, C;
  char players[MAX_A][MAX_C];
  char resp[MAX_C];
  int Ci[MAX_A];
  int maxCi;

  for (id = 1; id <= T; ++id) {
    int i;
    int j;
    int impossivel;

    scanf("%d", &A);
    maxCi = 0;
    for (i=0; i < A; i++) {
        scanf("%s", players[i]);
        Ci[i] = 0;
        maxCi = ( strlen(players[i]) > maxCi ) ? strlen(players[i]) : maxCi;
    }

    int s = 0;
    int r = 0;
    int p = 0;
    impossivel = 0;

    for (j=0; j < 500; j++) {
        r = 0; p = 0; s = 0;
        for (i=0; i < A; i++) {
            if ( players[i][Ci[i]] == '\0' ) {
                Ci[i] = 0;
            }

            if ( players[i][Ci[i]] == 'S' ) {
                p = 1;
            } else if ( players[i][Ci[i]] == 'P' ) {
                r = 1;
            } else {
                s = 1;
            }
            Ci[i]++;
        }
        if ( p > 0  && r > 0 && s > 0 ) {
            impossivel = 1;
            break;
        } else {
            if ( r+s+p == 1) {
                resp[j] = (r == 1) ? 'S' : (p == 1) ? 'R' : 'P';
                resp[j+1] = '\0';
                break;
            }
            resp[j] = (s == 0) ? 'S' : (p == 0) ? 'P' : 'R';
            resp[j+1] = '\0';
        }
    }

    if ( impossivel == 1 )
        printf("Case #%d: %s\n", id, "IMPOSSIBLE");
    else
        printf("Case #%d: %s\n", id, resp);
   }
  return 0;
}
