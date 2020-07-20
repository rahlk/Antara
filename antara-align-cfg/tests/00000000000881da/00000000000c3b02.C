#include <stdio.h>
#include <string.h>
int main(){
    int T, C;
    scanf("%d", &T);
    for(int C = 1; C <= T; C++){
        int N;
        scanf("%d", &N);
        char P[3000];
        scanf("%s", P);
        char table[1005][1005] = {0};
        char path[1005][1005][1005];
        int count[1005][1005] = {0};
        int x = 0, y = 0;
        
        for( int i = 0; i < (2*N)-2; i++){
            if (P[i] == 'E'){
                table[y][x] = 'E';
                x += 1;
            }
            else{
                table[y][x] = 'S';
                y += 1;
            }
        }
        count[0][0] = 1;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if( i == 0 && j == 0 ){
                    continue;
                }
                else{
                    if ( (i-1 >= 0) && (table[i-1][j] != 'S') && count[i-1][j] && (count[i][j] < (i+j)) ){
                        int length = strlen(path[i-1][j]);
                        for(int k = 0; k < length; k++){
                            path[i][j][k] = path[i-1][j][k];
                        }
                        path[i][j][length] = 'S';
                        count[i][j] = count[i-1][j] + 1;
                    }
                    if ( (j-1 >= 0) && (table[i][j-1] != 'E') && count[i][j-1] && (count[i][j] < (i+j)) ){
                        int length = strlen(path[i][j-1]);
                        for(int k = 0; k < length; k++){
                            path[i][j][k] = path[i][j-1][k];
                        }
                        path[i][j][length] = 'E';
                        count[i][j] = count[i][j-1] + 1;
                    }
                }
            }
        }
        printf("Case #%d: ", C);
        for( int i = 0; ; i++){
            if(path[N-1][N-1][i] == 0) break;
            printf("%c", path[N-1][N-1][i]);
        }
        printf("\n");
    }
}