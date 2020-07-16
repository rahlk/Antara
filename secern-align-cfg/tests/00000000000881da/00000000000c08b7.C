#include <stdio.h>

int main () {
    
    int T, N, x, i;
    char P[20005], M[20005], move;
    int myloc[2], herloc[2];
    
    scanf ("%d", &T);
    x = 0;
    
    while (T --) {
        x ++;
    
        scanf ("%d", &N);
        scanf ("%s", P);
        
        myloc[0] = myloc[1] = 0;
        herloc[0] = herloc[1] = 0;
        
        for (i=0; P[i] != '\0'; i++) {
        
            if (myloc[0] == herloc[0] 
            && myloc[1] == herloc[1]) { 
                if (P[i] == 'E') {
                    move = 'S';
                } else {
                    move = 'E';
                }
            } else {
                move = P[i-1];
            }
            
            M[i] = move;
            
            if (M[i] == 'E') {
                myloc[1] ++;
            } else {
                myloc[0] ++;
            }
            
            if (P[i] == 'E') {
                herloc[1] ++;
            } else {
                herloc[0] ++;
            }
        }
        
        M[i] = '\0';
        
        printf ("Case #%d: %s\n", x, M);
        
    }
    
    return 0;
}