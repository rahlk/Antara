#include <stdio.h>

int main () {
    int Testcases, i, k, Nsize;
    char Lmoves;
    
    scanf("%d", &Testcases);
    for (i=0; i<Testcases; i++) {
        scanf("%d", &Nsize);
        scanf("%c", &Lmoves); //new line
        //For each solution to the maze, there is a symmetrical one 
        // to the ([0,0][N,N]) diagonal. Here we can mirror every move of Lydia
        // and find the symmetrical solution.
        printf("Case #%d: ", (i+1));
        
        for (k=0; k<(2*Nsize - 2); k++) {
            scanf("%c", &Lmoves);
            if (Lmoves == 'S') {
                printf("E");
            }
            else {
                printf("S");
            }
        }
        printf("\n");
    }
    return 0;
}