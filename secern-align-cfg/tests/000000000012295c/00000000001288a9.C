#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, k, l, Testcases, People, Qlim;
    int Xpos, Ypos, Xcart, Ycart, *TotalX, *TotalY, max;
    char Dir;
    scanf("%d", &Testcases);
    
    for (i=0; i<Testcases; i++) {
        scanf("%d %d", &People, &Qlim);
        
        TotalX = malloc((Qlim+1) * sizeof(int));
        TotalY = malloc((Qlim+1) * sizeof(int));
        for (k=0; k<=Qlim; k++) {
            TotalX[k] = 0;
            TotalY[k] = 0;
        }
        
        for (k=0; k<People; k++) {
            scanf("%d %d %c", &Xpos, &Ypos, &Dir);
            if (Dir == 'N') {
                for (l=(Ypos+1); l<=Qlim; l++) {
                    TotalY[l]++;
                }
            }
            if (Dir == 'S') {
                for (l=(Ypos-1); l>=0; l--) {
                    TotalY[l]++;
                }
            }
            if (Dir == 'W') {
                for (l=(Xpos-1); l>=0; l--) {
                    TotalX[l]++;
                }
            }
            if (Dir == 'E') {
                for (l=(Xpos+1); l<=Qlim; l++) {
                    TotalX[l]++;
                }
            }
        }
        
        max = 0;
        Ycart = 0;
        Xcart = 0;
        for (Ypos=0; Ypos<=Qlim; Ypos++) {
            if (TotalY[Ypos] > max) {
                max = TotalY[Ypos];
                Ycart = Ypos;
            }
        }
        max = 0;
        for (Xpos=0; Xpos<=Qlim; Xpos++) {
            if (TotalX[Xpos] > max) {
                max = TotalX[Xpos];
                Xcart = Xpos;
            }
        }
        
        free(TotalX);
        free(TotalY);
        printf("Case #%d: %d %d\n", (i+1), Xcart, Ycart);
    }
    
    return 0;
}