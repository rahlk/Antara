#include<stdio.h>
int main()
{
    int i,j,T,P,Q,x,y,a,b,mx,my,max;
    int map[11][11] = {0};
    char c;
    scanf("%d",&T);
    for(i = 0; i < T; i++) {
        scanf("%d%d",&P,&Q);
        for(j = 0; j < P; j++) {
            scanf("%d%d %c",&x,&y,&c);
            if(c == 'W'){
                for(a = 0; a < x; a++) {
                    for(b = 0; b <= Q; b++) {
                        ++map[a][b];
                    }
                }
            }
            else if(c == 'E'){
                for(a = x+1; a <= Q; a++) {
                    for(b = 0; b <= Q; b++) {
                        ++map[a][b]; 
                    }
                }
            }
            else if(c == 'N') {
                for(a = 0; a <= Q; a++) {
                    for(b = y+1; b <= Q; b++) {
                        ++map[a][b]; 
                    }
                }
            }
            else {
                for(a = 0; a <= Q; a++) {
                    for(b = 0; b < y; b++) {
                        ++map[a][b]; 
                    }
                }
            }
        }
        max = 0;
        for(a = 0; a <= Q; a++) {
            for(b = 0; b <= Q; b++) {
                if(map[a][b] > max ) {
                    max = map[a][b];
                    mx = a; my = b;
                    map[a][b] = 0;
                }
                if(map[a][b] == b) {
                    if(a < mx || (a==mx&&b<my)) {
                        max = map[a][b];
                        mx = a; my = b;
                        map[a][b] = 0;
                    }
                }
            }
        }
        printf("Case #%d: %d %d\n",i+1,mx,my);
    }
    return 0;
}
