#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, i;
    int testcases;
    int nsize;
    char *path_str;

    scanf("%d", &testcases);

    for(t = 0; t < testcases; ++t) {
        scanf("%d", &nsize);
        path_str = (char *) calloc(((nsize - 1) << 1) + 5, sizeof(char));
        scanf("%s", path_str);

        printf("Case #%d: ", t + 1);

        for(i = 0; i < ((nsize - 1) << 1); ++i) {
            printf("%c", path_str[i] == 'S' ? 'E' : 'S');
        }

        printf("\n");

        free(path_str);
    }

    return 0;
}