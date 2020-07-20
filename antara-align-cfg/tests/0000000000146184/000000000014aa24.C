#include<stdio.h>

int x[11], y[11];
int value[11];

#define C 201

void
solve(int id){
    printf("Case %d: ", id);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d%d", x + i, y + i);
    }
    int bestx = 10000, besty = 10000;
    for(int X = 1; X < C; X++){
        for(int Y = 1; Y < C; Y++){
            int ok = 1;
            for(int i = 0; i < n; i++){
                value[i] = X * x[i] + Y * y[i];
                if(i && value[i] <= value[i - 1]){ok = 0; break;}
            }
            if(ok){
                if(X < bestx || (bestx == X && Y < besty)){bestx = X; besty = Y;}
            }
        }
    }
    if(bestx == 10000){printf("IMPOSSIBLE\n");}
    else{printf("%d %d\n", bestx, besty);}
}

int
main(){
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++)
        solve(i);
    return 0;
}