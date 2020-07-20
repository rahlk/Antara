#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int i = 0, t = 100, j, N[100];
    char P[100][2000], sol[100][2000], e[] = "E", s[] = "S";

    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf("%d", &N[i]);
        scanf("%s", P[i]);
    }

    for (i = 0; i < t; ++i) {
        for (j = 0; j < strlen(P[i]); ++j) {
            if (P[i][j] != e[0] && (j % 2) == 0) {
                strcat(sol[i], e);
            }
            else if (P[i][j] != s[0] && (j % 2) == 1) {
                strcat(sol[i], s);
            }
            else if ((j % 2) == 0) {
                strcat(sol[i], s);
            }
            else if ((j % 2) == 1) {
                strcat(sol[i], e);
            }
        }
    }

    for (i = 0; i < t; ++i) {
        printf("Case #%d: %s\n", i + 1, sol[i]);
    }

    return 0;
}
