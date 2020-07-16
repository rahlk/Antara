#include <stdio.h>
#include <stdlib.h>

int fair(int a, int b, int D) {
    if (abs(a-b) <= D) {
        return 1;
    }
    return 0;
}

int main() {
    int i, k, l, Testcases, val, maxC, maxD, Nswords, Kdiff, flag;
    int *Charles, *Delila;
    scanf("%d", &Testcases);
    
    for (i=0; i<Testcases; i++) {
        scanf("%d %d", &Nswords, &Kdiff);
        Charles = malloc(Nswords * sizeof(int));
        Delila = malloc(Nswords * sizeof(int));
        
        for (k=0; k<Nswords; k++) {
            scanf("%d", &Charles[k]);
        }
        
        for (k=0; k<Nswords; k++) {
            scanf("%d", &Delila[k]);
        }//done with input
        
        val = 0;
        for (k=0; k<Nswords; k++) {
            if (fair(Charles[k], Delila[k], Kdiff)) {
                val++;
            }
            maxC = Charles[k];
            maxD = Delila[k];
            flag = 0;
            for (l = (k+1); l<Nswords; l++) {
                if (maxC < Charles[l]) {
                    maxC = Charles[l];
                    flag = 1;
                }
                if (maxD < Delila[l]) {
                    maxD = Delila[l];
                    flag = 1;
                }
                if (flag && fair(maxC, maxD, Kdiff)) {
                    val++; 
                }
                flag = 0;
            }
            
        }
        
        free(Charles);
        free(Delila);
        printf("Case #%d: %d\n", (i+1), val);
    }
    return 0;
}