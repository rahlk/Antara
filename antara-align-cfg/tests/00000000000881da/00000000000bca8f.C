#include <stdio.h>
#include <stdlib.h>
#define MAXN 100001

int main() {
    int T;
    scanf("%d", &T);
    char str[MAXN];
    char answ[MAXN];
    for(int t=0; t<T; t++) {
        int N;
        scanf("%d", &N);
        scanf("%s", str);
        answ[2*N-2] = '\0';
        for(int i=0; i<2*N-2; i++)
            if(str[i] == 'E')
                answ[i] = 'S';
            else
                answ[i] = 'E';
        printf("Case #%d: %s\n", t+1, answ);
    }
    return 0;
}