#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double eps = 1e-8;

int main () {

    int T, LOOP;

    scanf("%d\n", &T);

    for (LOOP = 0; LOOP < T; LOOP ++) {
        char c;
        int len = 0, i, j;
        int data1[200], data2[200];
        while (1) {
            c = getchar();
            if ( c == EOF || c == '\n' ) {
                break;
            }
            data1[len++] = c - '0';
        }

        /*
        printf("====test case #%d====\n", LOOP+1);
        for (i = 0; i < len; i++) {
            printf("%d", data1[i]);
        }
        printf("\n");
        */

        for (i = 0; i < len; i++) {
            if (data1[i] == 4) {
                data1[i] = 3;
                data2[i] = 1;
            }
            else {
                data2[i] = 0;
            }
        }
        i = 0;
        while (i < len && (data1[i] == 0)) {
            i++;
        }
        while (i < len) {
            printf("%d", data1[i++]);
        }
        printf(" ");

        j = 0;
        while (j < len && (data2[j] == 0)) {
            j++;
        }
        while (j < len) {
            printf("%d", data2[j++]);
        }
        printf("\n");
    }

    return 0;
}
