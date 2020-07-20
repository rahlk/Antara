#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void solve(void);

int main(int argc, char* argv[]) {
    int t, i;

    scanf("%d", &t);
    /* Execute each test case */
    for (i = 0; i < t; i++) {
        printf("Case #%d: ", i + 1);
        solve();
    }
}

void solve(void) {
    int n, i, j, k, turn;
    scanf("%d", &n);
    char *me, *lyd, last_step;
    char g[n][n];

    me = malloc(sizeof(char) * (2 * n - 2));
    lyd = malloc(sizeof(char) * (2 * n - 2));
    scanf("%s", lyd);

    /* Initialize array */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            g[i][j] = ' ';
        }
    }

    /* Plot Lydias path */
    i = 0;
    j = 0;

    for (k = 0; k < strlen(lyd); k++) {
        if (lyd[k] == 'S') {
            g[i][j] = 'S';
            i++;
        } else {
            g[i][j] = 'E';
            j++;
        }
    }

    /* Print Lydias path */

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         printf("|\033[01;33m%c\033[0m|", g[i][j]);
    //     }
    //     printf("\n");
    // }

    /* Calculate Path */

    i = 0;
    j = 0;

    for (k = 0; k < strlen(lyd); k++) {
        switch (g[i][j]) {
            case 'S':
                me[k] = 'E';
                last_step = 'E';
                turn = TRUE;
                j++;
                break;

            case 'E':
                me[k] = 'S';
                last_step = 'S';
                turn = TRUE;
                i++;
                break;

            default:
                if (turn == TRUE) {
                    turn = FALSE;

                    if (last_step == 'S') {
                        me[k] = 'E';
                        last_step = 'E';
                        j++;
                    } else {
                        me[k] = 'S';
                        last_step = 'S';
                        i++;
                    }
                } else {
                    if (last_step == 'S') i++;
                    else j++;
                    me[k] = last_step;
                    break;
                }
        }
    }

    printf("%s\n", me);

    /* Plot & Print My Path */

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         g[i][j] = ' ';
    //     }
    // }

    // i = 0;
    // j = 0;

    // for (k = 0; k < strlen(lyd); k++) {
    //     if (me[k] == 'S') {
    //         g[i][j] = 'S';
    //         i++;
    //     } else {
    //         g[i][j] = 'E';
    //         j++;
    //     }
    // }

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         printf("|\033[01;34m%c\033[0m|", g[i][j]);
    //     }
    //     printf("\n");
    // }

}
