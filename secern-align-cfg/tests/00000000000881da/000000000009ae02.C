#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int i, N;
        int PathLen;
        char LPath[50000];
        char MyPath[50000];
        scanf("%d", &N);
        scanf("%s", LPath);
        PathLen = strlen(LPath)/2;
        for (i = 0; i < PathLen * 2; i++) {
            if (LPath[i] == 'E')
                MyPath[i] = 'S';
            else if (LPath[i] == 'S')
                MyPath[i] = 'E';
            else
                break;
        }
        printf("Case #%d: %s\n", tc, MyPath);
    }
    return 0;
}
