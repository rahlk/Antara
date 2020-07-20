#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, i, j, p, q, x0, xn, y0, yn, x, y;
    char d, a;
    
    scanf("%d", &t);
    for(i = 1;i <= t;i++){
        scanf("%d%d", &p, &q);
        x0 = 0;
        xn = q;
        y0 = 0;
        yn = q;
        for(j = 1;j <=p;j++){
            scanf("%d%d%c%c%c",&x,&y,&d,&d,&a);
            //printf("%d%d %c\n",x, y, d);
            if(d == 'N' && y0 < y+1)
                y0 = y+1;
            if(d == 'S' && yn > y-1)
                yn = y-1;
            if(d == 'E' && x0 < x+1)
                x0 = x +1;
            if(d == 'W' && xn > x-1)
                xn = x-1;
            //printf("%d %d %d %d\n",x0,y0,xn,yn);
        }
        printf("Case #%d: %d %d\n",i,x0,y0);
    }
}