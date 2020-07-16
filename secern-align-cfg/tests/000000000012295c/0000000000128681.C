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
    int i;
    for (i = 0 ; i < T ; i++){
        int P, Q;
        scanf("%d %d", &P, &Q);
        struct people p[P];
        for(int j = 0 ; j < P ; j++){
            scanf("%d %d %c", &p[j].x, &p[j].y, &p[j].z);
        }

        int x[Q + 1], y[Q + 1];
        for(int m = 0 ; m < Q + 1 ; m++){
            x[m] = 0, y[m] = 0;
        }
        for(int k = 0 ; k < P ; k++){
            if(p[k].z == 'N'){
                for(int j = p[k].y + 1 ; j < Q + 1 ; j++){
                    y[j]++;
                }
            }else if(p[k].z == 'S'){
                for(int j = p[k].y - 1 ; j >= 0 ; j--){
                    y[j]++;
                }
            }else if(p[k].z == 'W'){
                for(int j = p[k].x - 1 ; j >= 0 ; j--){
                    x[j]++;
                }
            }else{
                for(int j = p[k].x + 1 ; j < Q + 1 ; j++){
                    x[j]++;
                }
            }
        }

        int max_x = x[0], max_y = y[0], rx = 0, ry = 0;
        for(int l = 1 ; l < Q + 1 ; l++){
            if(max_x < x[l]) max_x = x[l], rx = l;
            if(max_y < y[l]) max_y = y[l], ry = l;
        }

        printf("Case #%d: %d %d", i + 1, rx, ry);

    }

    return 0;
}
