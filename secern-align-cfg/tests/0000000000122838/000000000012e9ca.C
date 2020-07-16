#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    int N[T], K[T];
    int C[T][10000], D[T][10000];
    for (int i = 0 ; i < T ; i++){
        scanf("%d %d", &N[i], &K[i]);
        for(int j = 0 ; j < N[i] ; j++){
            scanf("%d", &C[i][j]);
        }
        for(int j = 0 ; j < N[i] ; j++){
            scanf("%d", &D[i][j]);
        }
    }
    for(int i = 0 ; i < T ; i++){

        int cnt = 0;
        for(int a = 0 ; a < N[i] ; a++){
            for(int b = a ; b < N[i] ; b++){
                int max_c = C[i][a], max_d = D[i][a];
                for(int k = a + 1 ; k <= b ; k++){
                    if(C[i][k] > max_c) max_c = C[i][k];
                    if(D[i][k] > max_d) max_d = D[i][k];
                }
                if(abs(max_c - max_d) <= K[i]) cnt++;
            }
        }
        printf("Case #%d: %d\n", i + 1, cnt);
    }
    
    return 0;
}
