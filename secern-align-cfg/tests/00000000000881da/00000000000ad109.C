#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCaseCount;
    scanf("%d", &testCaseCount);
    char *str1;
    char *str2;

    for(int i = 0; i < testCaseCount; i++){
        int N;
        scanf("%d", &N);
        str1 = (char *)malloc(sizeof(char) * (2*N + 1));
        str2 = (char *)malloc(sizeof(char) * (2*N + 1));
        scanf("%s", str1);
        for(int j = 0; j < 2*N - 2; j++){
            if(str1[j] == 'S'){
                str2[j] = 'E';
            } else {
                str2[j] = 'S';
            }
        }
        str2[2*N - 2] = '\0';
        printf("Case #%d: %s\n", i+1, str2);
        free(str1);
        free(str2);

    }
    return 0;
}
