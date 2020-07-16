#include <stdio.h>

#define N 500005

char s[N];

int
main(){
    int T;
    scanf("%d", &T);
    for(int id = 1; id <= T; id++){
        int n;
        scanf("%d\n", &n);
        fgets(s, N, stdin);
        printf("Case #%d: ", id);
        for(int i = 0; i < 2 * n - 2; i++)
            putc(s[i] == 'E' ? 'S' : 'E', stdout);
        putc('\n', stdout);
    }
    return 0;
}