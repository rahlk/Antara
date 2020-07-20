#include <stdio.h>
#include <string.h>

char str[255][505];
int len[255];
int sum[256];
char sol[505];

int main() {
    int i, j, t, T, N, max_len=0;
    int no_sol;

    scanf("%d", &T);
    for(t=1; t<=T; ++t) {
        scanf("%d", &N);
        no_sol = 0;
        for(i=0; i<N; ++i){
            scanf("%s", str[i]);
            len[i] = strlen(str[i]);
            for(j=0; j<500; ++j)
                str[i][j] = str[i][j % len[i]];
        }
        for(i=0; i<500; ++i) {
            memset(sum, 0, 256*sizeof(int));
            for(j=0; j<N; ++j) {
                sum[str[j][i]] ++;
            }
            if(sum['R'] && sum['P'] && sum['S']) {
                no_sol = 1;
                break;
            } else if(sum['R'] && sum['P']) {
                sol[i] = 'P';
            } else if(sum['S'] && sum['P']) {
                sol[i] = 'S';
            } else if(sum['R'] && sum['S']) {
                sol[i] = 'R';
            } else if(sum['R']) {
                sol[i] = 'P';
            }  else if(sum['S']) {
                sol[i] = 'R';
            }  else if(sum['P']) {
                sol[i] = 'S';
            } 
        }
        sol[i] = 0;
        if(no_sol)
            printf("Case #%d: IMPOSSIBLE\n", t);
        else
            printf("Case #%d: %s\n", t, sol);
    }
    return 0;
}
