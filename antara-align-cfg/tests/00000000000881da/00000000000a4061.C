#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int i, N;
        char LPath[18];
        char MyPath[18];
        scanf("%d", &N);
        scanf("%s", LPath);
        for (i = 0; i < (N - 1) * 2; i++) {
            if (LPath[i] == 'E')
                MyPath[i] = 'S';
            else if (LPath[i] == 'S')
                MyPath[i] = 'E';
        }
        printf("Case #%d: %s\n", tc, MyPath);
    }
    return 0;
}
