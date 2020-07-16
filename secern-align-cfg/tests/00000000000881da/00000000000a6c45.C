#include<stdio.h>

int main() {
    int N, T;
    int i, j;
    char str[100000] = {0};
    scanf("%d\n", &T);
    for(i = 0; i < T; i++) {
        scanf("%d\n", &N);
        fgets(str, 2*N-1, stdin);
        printf("Case #%d: ", i+1);
        for (j = 0; j < 2*N-2; j++){
            printf("%c", (str[j] == 'E') ? 'S' : 'E');
        }
        printf("\n");
    }
}