#include <stdio.h>
#include <stdbool.h>

int
main(void)
{
    bool cont;
    int j;
    int k;
    int cnt = 0;
    char num[102];
    char comp[102];

    scanf("%d\n", &cnt);

    for (int i = 1; i <= cnt; i++) {
        scanf("%s\n", num);
        j = 0;
        k = 0;
        cont = false;
        while (*(num + j) != '\0') {
            if (*(num + j) == '4') {
                *(comp + k) = '1';
                k++;
                *(num + j) = '3';
                if (!cont) cont = true;
            } else if (cont) {
                *(comp + k) = '0';
                k++;
            }
            j++;
        }
        *(comp + k) = '\0';
        printf("Case #%d: %s %s\n", i, num, comp);
    }

    return (0);
}