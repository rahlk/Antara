#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j, s;
    int testcases;
    int first_one;
    char num[105];

    scanf("%d", &testcases);

    for(i = 0; i < testcases; ++i) {
        scanf("%s", num);

        s = strlen(num);

        printf("Case #%d: ", i + 1);

        first_one = 1;
        for(j = 0; j < s; ++j) {
            if(num[j] == '4') {
                printf("1");
                num[j] = '3';

                if(first_one) {
                    first_one = 0;
                }
            }
            else if(!first_one) {
                printf("0");
            }
        }

        printf(" %s\n", num);
    }
}