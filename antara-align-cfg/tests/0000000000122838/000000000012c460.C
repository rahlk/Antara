#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

    int t, n, k, i, j, m, numpairs;
    int maxc, maxd;
    int *c, *d;
    scanf("%d\n", &t);
    for (i=1; i<=t; i++){
        numpairs = 0;
        scanf("%d %d\n", &n, &k);
        
        
        c=(int *)malloc(n*sizeof(int));
        d=(int *)malloc(n*sizeof(int));

        for (j=0; j<n; j++) {
            scanf("%d", c+j);
        }
        getchar();
        for (j=0; j<n; j++) {
            scanf("%d", d+j);
        }
        
        for (j=0; j<n; j++) {
            maxc = c[j];
            maxd = d[j];
            for (m=j; m<n; m++) {
                if (c[m]>maxc)
                    maxc = c[m];
                if (d[m]>maxd)
                    maxd = d[m];
                if (abs(maxd-maxc)<=k) {
                    numpairs++;
                }
            }
        }
        
        printf("Case #%d: %d\n", i, numpairs);
        
        free(c);
        free(d);
    }
    return 0;
}