#include<stdio.h>
#include <stdbool.h>
bool map[20][20];
int step[2][400];
int idx,size,R,C;
bool valid(int i, int j, int r, int c)
{
    if(map[i][j]) return false;
    if(i == r || j == c
       || i+j == r+c 
       || i-j == r-c)
        return false;
    return true;
}
bool trav(int r, int c)
{
    int i,j;
    if(idx == size) return true;
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            if( valid(i,j,r,c) ) {
                ++idx;
                map[i][j] = true;
                if(trav(i,j)) {
                    --idx;
                    step[0][idx] = i;
                    step[1][idx] = j;
                    return true;
                }
                map[i][j] = false;
                --idx;
            }
        }
    }
    return false;
}
int main()
{
    int T,i,j,r,c;
    scanf("%d",&T);
    for(i = 1; i <= T; i++) {
        scanf("%d%d",&R,&C);
        for(r = 0; r < R; r++) {
            for(c = 0; c < R; c++) {
                map[r][c] = false;
            }
        }
        step[0][0] = 0;
        step[1][0] = 0;
        idx = 1;size = R*C;
        map[0][0] = true;
        if( trav(0,0) ) {
            printf("Case #%d: POSSIBLE\n",i);
            for(j = 0; j < size; j++) {
                printf("%d %d\n", step[0][j], step[1][j]);
            }
        }
        else {
            printf("Case #%d: IMPOSSIBLE\n",i);
        }
    }
    return 0;
}
