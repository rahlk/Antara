#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int recursiveFindPath(int N, char ** maze, int x, int y, char * result, int rIdx) {
    int tmpResult = -1;
    char tmpChar;
    if (x == N-1 && y == N-1) {
        result[rIdx] = '\0';
        return 1;
    } else {
        tmpChar = maze[x][y];
        if (tmpChar == 'E' || tmpChar == 'S') {
            if (tmpChar == 'E' && x < N-1) {
                result[rIdx] = 'S';
                tmpResult = recursiveFindPath(N, maze, x+1, y, result, rIdx+1);
            } else if (tmpChar == 'S' && y < N-1) {
                result[rIdx] = 'E';
                tmpResult = recursiveFindPath(N, maze, x, y+1, result, rIdx+1);
            }
        } else {
            if(x < N-1) {
                result[rIdx] = 'S';
                tmpResult = recursiveFindPath(N, maze, x+1, y, result, rIdx+1);
            }
            if(tmpResult != 1 && y < N-1) {
                result[rIdx] = 'E';
                tmpResult = recursiveFindPath(N, maze, x, y+1, result, rIdx+1);
            }
        }
    }
    return tmpResult;
}


int main() {
    int T, N;
    int curCase = 1;
    int i, x, y;
    char * lydiaPath;
    char * result;
    char ** maze;

    scanf("%d", &T);
    while(curCase <= T) {
        scanf("%d", &N);
        lydiaPath = (char *) malloc((2*N-1)*sizeof(char));
        result = (char *) malloc((2*N-1)*sizeof(char));
        scanf("%s", lydiaPath);
        maze = (char **) malloc(N*sizeof(char *));
        for(i = 0; i < N; i++) {
            maze[i] = (char *) malloc(N*sizeof(char));
            memset(maze[i], '0', N*sizeof(char));
        }
        x = y = 0;
        for(i = 0; i < 2*N-2; i++) {
            if(lydiaPath[i] == 'E') {
                maze[x][y] = 'E';
                y += 1;
            } else if(lydiaPath[i] == 'S') {
                maze[x][y] = 'S';
                x += 1;
            }
        }
        recursiveFindPath(N, maze, 0, 0, result, 0);
        printf("Case #%d %s\n", curCase, result);
        free(lydiaPath);
        free(result);
        for(i = 0; i < N; i++) {
           free(maze[i]);
        }
        free(maze);
        curCase += 1;
    }
}
