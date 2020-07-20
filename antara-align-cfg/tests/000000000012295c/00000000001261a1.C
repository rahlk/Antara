#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

    int t, p, q, i, j, k, x, y;
    int *xcount, *ycount;
    char direction;
    if(!scanf("%d\n", &t)){
        printf("Error: no input");
        return(1);
    }
    for (i=1; i<=t; i++){
        scanf("%d %d\n", &p, &q);

        xcount=(int *)calloc(q+1, sizeof(int));
        ycount=(int *)calloc(q+1, sizeof(int));

        
        for (j=0; j<p; j++) {
            scanf("%d %d %c\n", &x, &y, &direction);
            
            if(direction == 'N') {
                for (k=y+1; k<=q; k++) {
                    ycount[k]++;
                }
            } else if(direction == 'S') {
                for (k=y-1; k>=0; k--) {
                    ycount[k]++;
                }
            } else if(direction == 'E') {
                for (k=x+1; k<=q; k++) {
                    xcount[k]++;
                }
            } else if(direction == 'W') {
                for (k=y-1; k>=0; k--) {
                    xcount[k]++;
                }
            }
        }
        
        int maxx=0, maxy=0;
        x=0;
        y=0;
        for (j=0; j<=q; j++) {
            if (xcount[j]>maxx) {
                maxx = xcount[j];
                x = j;
            }
            if (ycount[j]>maxy) {
                maxy = ycount[j];
                y = j;
            }
        }
        
        printf("Case #%d: %d %d\n", i, x, y);
        
    }
    return 0;
}