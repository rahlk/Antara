#include <stdio.h>

int main()
{
    int T;
    int N;
    char R[50001];
    int i, j;
    
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        scanf("%s", R);
        for (j = 0; j < N; j++) {
            if (R[j] == 'S')
                R[j] = 'E';
            else
                R[j] = 'S';
        }
        printf("Case #%d: %s", i + 1, R);
    }
    return 0;
}