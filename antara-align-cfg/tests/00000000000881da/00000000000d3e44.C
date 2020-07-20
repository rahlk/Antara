#include<stdio.h>
#include<stdbool.h>

void makeEveryCellAvailable(int n, int maze[][n]) {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            maze[i][j] = -1;
        }
    }
}

void fillMazeWithHurdles(char p[], int n, int maze[][n]) {
    makeEveryCellAvailable(n, maze);
    int i, j, k, length;
    i = j = 0;
    length = 2*n - 2;
    for(k=0;k<length-1;k++) {
        if(p[k] == 'E') {
            maze[i][j+1] = j;
            j++;
        }
        else {
            maze[i+1][j] = i;
            i++;
        }
    }
}

bool reachSouthEastCell(int n, int maze[][n], char y[], 
                            int* count, int i, int j) {
                                
        if(i == n-1 && j== n-1)
            return true;
        if((j+1 < n) && maze[i][j+1] != j) {
            if(reachSouthEastCell(n, maze, y, count, i, j+1)) {
                y[*count] = 'E';
                *count = *count + 1;
                return true;
            }
            else
                maze[i][j+1] = -2;
        }
        if((i+1 < n) && maze[i+1][j] != i) {
            if(reachSouthEastCell(n, maze, y, count, i+1, j)) {
                y[*count] = 'S';
                *count = *count + 1;
                return true;
            }
            else
                maze[i+1][j] = -2;
        }
        return false;
    }

void printPath(char y[], int n, int testCaseNumber) {
    int length = 2*n-2;
    int i;
    printf("Case #%d: ", testCaseNumber+1);
    for(i=length-1;i>=0;i--) {
        printf("%c", y[i]);
    }
    printf("\n");
}

int main(void) {
    int t,n, i, count;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d", &n);
        int maze[n][n];
        char p[2*n-2];
        char y[2*n-2];
        scanf("%s", p);
        fillMazeWithHurdles(p, n, maze);
        count=0;
        reachSouthEastCell(n, maze, y, &count, 0, 0);
        printPath(y, n, i);
    }
    return 0;
}