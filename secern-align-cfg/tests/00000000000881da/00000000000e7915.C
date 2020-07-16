#include <stdio.h>

int main(void) {
    int t, i;
    int testcases;
    int nsize;
    char path_str[1005];

    scanf("%d", &testcases);

    for(t = 0; t < testcases; ++t) {
        scanf("%d", &nsize);
        scanf("%s", path_str);

        printf("Case #%d: ", t + 1);

        for(i = 0; i < ((nsize - 1) << 1); ++i) {
            printf("%c", path_str[i] == 'S' ? 'E' : 'S');
        }

        printf("\n");
    }

    return 0;
}