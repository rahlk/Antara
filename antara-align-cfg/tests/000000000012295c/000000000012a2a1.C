#include <stdio.h>
#include <stdlib.h>

struct people{
    int x;
    int y;
    char z;
};

int main()
{
    int T;
    scanf("%d", &T);
    int P[T], Q[T];
    struct people p[T][500];
    for (int i = 0 ; i < T ; i++){
        scanf("%d %d", &P[i], &Q[i]);
        for(int j = 0 ; j < P[i] ; j++){
            scanf("%d %d %c", &p[i][j].x, &p[i][j].y, &p[i][j].z);
        }
    }
    for(int i = 0 ; i < T ; i++){

        int x[Q[i] + 1], y[Q[i] + 1];

        for(int m = 0 ; m < Q[i] + 1 ; m++){
            x[m] = 0, y[m] = 0;
        }

        for(int k = 0 ; k < P[i] ; k++){

            if(p[i][k].z == 'N'){
                for(int j = p[i][k].y + 1 ; j < Q[i] + 1 ; j++){
                    y[j]++;
                }
            }else if(p[i][k].z == 'S'){
                for(int j = p[i][k].y - 1 ; j >= 0 ; j--){
                    y[j]++;
                }
            }else if(p[i][k].z == 'W'){
                for(int j = p[i][k].x - 1 ; j >= 0 ; j--){
                    x[j]++;
                }
            }else{
                for(int j = p[i][k].x + 1 ; j < Q[i] + 1 ; j++){
                    x[j]++;
                }
            }
        }

        int max_x = x[0], max_y = y[0], rx = 0, ry = 0;
        for(int l = 1 ; l < Q[i] + 1 ; l++){
            if(max_x < x[l]) max_x = x[l], rx = l;
            if(max_y < y[l]) max_y = y[l]   , ry = l;
        }

        printf("Case #%d: %d %d\n", i + 1, rx, ry);

    }

    return 0;
}
