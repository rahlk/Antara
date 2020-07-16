#include <stdio.h>

int main()
{
    int T;
    int N;
    char R[50001];
    int es = 'E' + 'S';
    int i, j;
    
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        scanf("%s", R);
        for (j = 0; j < N; j++) {
            R[j] = (char)(es - (int)R[j]);
        }
        printf("Case #%d: %s\n", i + 1, R);
    }
    return 0;
}