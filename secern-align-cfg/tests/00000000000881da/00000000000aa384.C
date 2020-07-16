#include <stdio.h>

int T, N;

int main() {
    char lydia[50000];
    
    scanf("%d", &T);
    for (int tc=1; tc<=T; tc++) {
        scanf("%d", &N);
        scanf("%s", lydia);
        for (int i=0; i<(N-1)*2; ++i) {
            if (lydia[i] == 'S') lydia[i] = 'E';
            else lydia[i] = 'S'; 
        }
        
        printf("Case #%d: %s\n", tc, lydia);
    }
    
    return 0;
}