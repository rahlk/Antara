#include <stdio.h>
#include <stdlib.h>

int T, R, C;
int galaxy[20][20];
int path_idx;
int path_r[400];
int path_c[400];
int done;

int find_path(int R, int C, int cur_r, int cur_c){
    if (done == 1){
        return 0;
    }
    for(int i=0; i<R; ++i){
        for(int j=0; j<C; ++j){
            if(galaxy[i][j] == 0 && i != cur_r && j != cur_c && (i + j) != (cur_r + cur_c) && (i - j) != (cur_r - cur_c)){
                galaxy[i][j] = 1;
                path_r[path_idx] = i;
                path_c[path_idx] = j;
                ++path_idx;
                //print_path(path_idx);
                //printf("path (%d %d), idx %d \n", i, j, path_idx);
                find_path(R,C,i,j);
            }
        }
    }
    if (path_idx == R*C) {
        done = 1;
    }
    else {
        galaxy[cur_r][cur_c] = 0;
        --path_idx;
    }
    return 0;
}

void print_path(int idx){
    printf("\n");
    for(int i=0; i<idx; ++i)
        printf("(%d, %d) ", path_r[i], path_c[i]);
    printf("\n");
}

int find_path_from_all(int R, int C){
    for(int i=0; i<R; ++i){
        for(int j=0; j<C; ++j){
            galaxy[i][j] = 1;
            path_r[path_idx] = i;
            path_c[path_idx] = j;
            ++path_idx;
            find_path(R,C,i,j);
            galaxy[i][j] = 0;
            --path_idx;
            if(done == 1)
                break;
        }
        if(done == 1)
            break;
    }
    return 0;
}

int main(){
	scanf("%d", &T);

	for(int i=1; i<=T; ++i){
		scanf("%d %d", &R, &C);
        path_idx = done = 0;
        for(int i=0; i<20; ++i)
            for(int j=0; j<20; ++j)
                galaxy[i][j] = 0;
        find_path_from_all(R,C);
		if (done == 1){
            printf("Case #%d: POSSIBLE\n", i);
            for(int k=0; k<=path_idx; ++k)
                printf("%d %d\n", path_r[k]+1, path_c[k]+1);
        } else {
            printf("Case #%d: IMPOSSIBLE\n", i);
        }
	}
	
	return 0;
}
