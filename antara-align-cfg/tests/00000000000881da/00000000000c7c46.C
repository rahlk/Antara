#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    getchar();
    for (int t=1 ; t<=T ; t++) {
        int N;
        scanf("%d", &N);
        getchar();
        
        printf("Case #%d: ", t);
        char p, q = '\0';
        for (int i=0 ; i<2*(N-1) ; i++) {
            scanf("%c", &p);
            printf("%c", p=='S'?'E':'S');
        }
        printf("\n");
        
    }
    
    return 0;
}