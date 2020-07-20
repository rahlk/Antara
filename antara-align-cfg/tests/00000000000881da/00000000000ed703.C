#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int i = 0, t = 100, j, k, N[100];
    char P[100][2000], sol[100][2000], e[] = "E", s[] = "S";
    int a = 0, b = 0, a_sol = 0, b_sol = 0, a_p = 0, b_p = 0;
    int flag, flag2, flag3;

    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf("%d", &N[i]);
        scanf("%s", P[i]);
    }

    for (i = 0; i < t; ++i) {
        for (j = 0; j < strlen(P[i]); ++j) {
            if ((j % 2) == 0) {
                strcat(sol[i], e);
            }
            else if ((j % 2) == 1) {
                strcat(sol[i], s);
            }
        }

    }

    for (i = 0; i < t; ++i) {
        a_sol = 0, b_sol = 0, a_p = 0, b_p = 0;

        for (j = 0; j < strlen(P[i]) - 1; ++j) {
            if (a_sol == a_p && b_sol == b_p) {
                sol[i][j] = '\0';

                if (P[i][j] != e[0]) {
                    for (k = j; k < strlen(P[i]); ++k) {
                        if ((k % 2) == 0) {
                            strcat(sol[i], e);
                        }
                        else if ((k % 2) == 1) {
                            strcat(sol[i], s);
                        }
                    }
                }
                else if (P[i][j] != s[0]) {
                    for (k = j; k < strlen(P[i]); ++k) {
                        if ((k % 2) == 0) {
                            strcat(sol[i], s);
                        }
                        else if ((k % 2) == 1) {
                            strcat(sol[i], e);
                        }
                    }
                }
            }


            if (sol[i][j] == e[0]) {
                a_sol++;
            }
            else if (sol[i][j] == s[0]) {
                b_sol++;
            }
            if (P[i][j] == e[0]) {
                a_p++;
            }
            else if (P[i][j] == s[0]) {
                b_p++;
            }
        }
    }


    for (i = 0; i < t; ++i) {
        printf("Case #%d: %s\n", i + 1, sol[i]);
    }

    return 0;
}
