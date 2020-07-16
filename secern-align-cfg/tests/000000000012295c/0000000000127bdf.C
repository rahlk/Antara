#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, i, j, p, q, x0, xn, y0, yn, x, y, arr[505][4], count, ans, ansx, ansy;
    char d, a;
    
    scanf("%d", &t);
    for(i = 1;i <= t;i++){
        scanf("%d%d", &p, &q);
        ans = 0;
        ansx = -1;
        ansy = -1;
        for(j = 1;j <=p;j++){
            scanf("%d%d%c%c%c",&x,&y,&d,&d,&a);
            arr[j][1] = x;
            arr[j][2] = y;
            arr[j][3] = d;
        }
        for(x = 0;x <= q;x++){
            for(y = 0;y <=q;y++){
                count = 0;
                for(j = 1;j <= p;j++){
                    d = arr[j][3];
                    //printf("%d\n", d);
                    if(d == 'N' && y > arr[j][2])
                        count++;
                    if(d == 'S' && y < arr[j][2])
                        count++;
                    if(d == 'E' && x > arr[j][1])
                        count++;
                    if(d == 'W' && x < arr[j][1])
                        count++;
                }
                if(count > ans){
                    ans = count;
                    ansx = x;
                    ansy = y;
                }
            }
        }
        printf("Case #%d: %d %d\n",i,ansx,ansy);
    }
}