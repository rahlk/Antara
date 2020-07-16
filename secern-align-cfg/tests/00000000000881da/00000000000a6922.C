#include <stdio.h>

int
main(void)
{
    int cnt = 0;
    int n = 0;
    int j;
    char path[100001];

    scanf("%d\n", &cnt);

    for (int i = 1; i <= cnt; i++) {
        scanf("%d\n", &n);
        scanf("%s\n", path);

        j = 0;
        while (*(path + j) != '\0') {
            if (*(path + j) == 'E') {
                *(path + j) = 'S';
            } else {
                *(path + j) = 'E';
            }
            j++;
        }

        printf("Case #%d: %s\n", i, path);
    }

    return (0);
}