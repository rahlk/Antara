#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int N;
    char R[100003];
    int es = 'E' + 'S';
    int i, j;
    
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        memset(R, 0, 2 * N);
        scanf("%s", R);
        for (j = 0; j < N; j++) {
            R[j] = (char)(es - (int)R[j]);
        }
        printf("Case #%d: %s\n", i + 1, R);
    }
    return 0;
}