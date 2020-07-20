#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, k, l, Testcases, People, Qlim;
    int Xpos, Ypos, Xcart, Ycart, **Totals, max;
    char Dir;
    scanf("%d", &Testcases);
    
    for (i=0; i<Testcases; i++) {
        scanf("%d %d", &People, &Qlim);
        
        Totals = malloc((Qlim+1) * sizeof(int*));
        for (k=0; k<=Qlim; k++) {
            Totals[k] = malloc((Qlim+1) * sizeof(int));
            for (l=0; l<=Qlim; l++) {
                Totals[k][l] = 0;
            }
        }
        
        for (k=0; k<People; k++) {
            scanf("%d %d %c", &Xpos, &Ypos, &Dir);
            if (Dir == 'N') {
                for (l=(Ypos+1); l<=Qlim; l++) {
                    Totals[l][Xpos]++;
                }
            }
            if (Dir == 'S') {
                for (l=(Ypos-1); l>=0; l--) {
                    Totals[l][Xpos]++;
                }
            }
            if (Dir == 'W') {
                for (l=(Xpos-1); l>=0; l--) {
                    Totals[Ypos][l]++;
                }
            }
            if (Dir == 'E') {
                for (l=(Xpos+1); l<=Qlim; l++) {
                    Totals[Ypos][l]++;
                }
            }
        }
        
        max = 0;
        Ycart = 0;
        Xcart = 0;
        for (Ypos=0; Ypos<=Qlim; Ypos++) {
            for (Xpos=0; Xpos<=Qlim; Xpos++) {
                if (Totals[Ypos][Xpos]>max) {
                    Ycart = Ypos;
                    Xcart = Xpos;
                    max = Totals[Ypos][Xpos];
                }
            }
        }
        
        free(Totals);
        printf("Case #%d: %d %d\n", (i+1), Xcart, Ycart);
    }
    
    return 0;
}