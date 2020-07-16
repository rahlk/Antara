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
        
        printf("Case #1: ");
        char p, q = '\0';
        for (int i=0 ; i<N ; i++) {
            scanf("%c", &p);
            printf("%c", p=='S'?'E':'S');
        }
        printf("\n");
        
    }
    
    return 0;
}