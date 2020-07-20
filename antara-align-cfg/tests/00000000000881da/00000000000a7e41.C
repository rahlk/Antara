#include<stdio.h> 
#include<stdlib.h> 
 
bool solveMazeUtil(int *maze[], int x, int y, int *sol[], int N); 
void sanitize(int *maze[], int N);
  
void printSolution(int *sol[], int N) 
{
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", sol[i][j]); 
        printf("\n"); 
    } 
} 
  
bool isSafe(int *maze[], int x, int y, int N) 
{ 
    // if (x,y outside maze) return false 
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) 
        return true; 
  
    return false; 
} 
  
bool solveMaze(int *maze[], int N, char *pathstr) 
{ 
    int i = 0;
    int **sol = (int**) malloc(sizeof(int*)*N);
    
    for (i=0; i<N; i++) {
        sol[i] = (int*) malloc(sizeof(int)*N);
    } 

    if(solveMazeUtil(maze, 0, 0, sol, N) == false) 
    { 
        printf("Solution doesn't exist\n"); 
        return false; 
    } 
  
    int len = 2*N - 2;
    int path[len]; 

    int x, y; 
    int idx = 0;
    for (x=0; x<N; x++) {
        for (y=0; y<N; y++) {
            if (sol[x][y] == 1) {
                path[idx++] = N*x + y;
            }       
        }
    }
    
    for(x =0; x<len; x++) {
        int diff = path[x+1] - path[x]; 
        if (diff == N) {
            pathstr[x] = 'S';
        } else if (diff == 1) {
            pathstr[x] = 'E';
        } else {
            printf("should never happen\n");
        }
    }


    //printSolution(sol, N); 
    return true; 
} 
  
bool solveMazeUtil(int *maze[], int x, int y, int *sol[], int N) 
{ 
    if(x == N-1 && y == N-1) 
    { 
        sol[x][y] = 1; 
        return true; 
    } 
  
    if(isSafe(maze, x, y, N) == true) 
    { 
        sol[x][y] = 1; 
  
        if (solveMazeUtil(maze, x+1, y, sol, N) == true) 
            return true; 
  
        if (solveMazeUtil(maze, x, y+1, sol, N) == true) 
            return true; 
  
        sol[x][y] = 0; 
        return false; 
    }    
  
    return false; 
} 

int main() {
    int T; 
    int i;
 
    scanf("%d", &T);
    for (i = 0; i<T; i++) {
        int N; 

        scanf("%d", &N);

        int len = 2*N - 2;
        char restr[len+1];
        int j; 
        for (j=0; j<len+1; j++) {
            restr[j] = '\0';
        }
        scanf("%s", restr);

        int i = 0;
        int **maze = (int **) malloc(sizeof(int*) * N);
        for (i=0; i<N; i++) {
            maze[i] = (int*) malloc(sizeof(int) * N);
        }   

        int p = 0, q = 0;
        for (p=0; p<N; p++) {
            for (q=0; q<N; q++) {
                maze[p][q] = 1;
            }
        }
    
        //printSolution(maze, N);

        int x = 0; 
        int y = 0;
        int current = N*x + y; // label
        for (j=0; j<len+1; j++) {
            int next = -1; 
        
            if (restr[j] == 'E') {
                next = current + 1;
            }

            if (restr[j] == 'S') {
                next = current + N;
            }

            if (next == -1) {
                break;
            }
    
            int r = next % N;
            int q = next / N;

            //printf("=== %d %d\n", q, r);
            maze[q][r] = 0; 

            current = next;
        }

        //printSolution(maze, N);
        
        sanitize(maze, N);

        //printSolution(maze, N);

        char pathstr[len+1]; 
        solveMaze(maze, N, pathstr);
        pathstr[len] = '\0';

        printf("Case #%d: %s\n", i+1, pathstr);
    }
}

void sanitize(int *maze[], int N) {
    int i, j; 
    
    for (i=1; i<N-1; i++) {
        for (j=1; j<N-1; j++) {
            int a = maze[i-1][j];
            int b = maze[i][j];
            int c = maze[i+1][j];            
            if ((a == 1) && (b == 0) && (c ==1)) {
                maze[i][j] = 1;
            }
        }
    }

    for (i=1; i<N-1; i++) {
        for (j=1; j<N-1; j++) {
            int a2 = maze[i][j-1];
            int b2 = maze[i][j];
            int c2 = maze[i][j+1];
            if ((a2 == 1) && (b2 == 0) && (c2 ==1)) {
                maze[i][j] = 1;
            }
        }
    }
}
