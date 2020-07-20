#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 50000
bool solveMazeUtil(int maze[N][N], int x, int y, int count,char* sol); 


int main(){
    int i,p,j,k; int n; char c;
     int A[N][N] ={0};   //char sol[(N-1)*(N-1)];
      A[0][0]=1;
    scanf("%d\n",&n);
    for (i=0;i<n;i++){
        int a =0; int b=0; 
        scanf("%d\n",&j);
        char* sol = (char*) malloc (((j-1)*2) *sizeof(char));
       // int* A= (int*) malloc()
        for (k=0;k<j;k++){
          scanf("%c",&c);
          if (c=='E') b = b+1;
          if (c == 'S') a =a+1;
          A[a][b]=1;
        }
        scanf("\n");
      bool tr=solveMazeUtil(A[j][j],0, 0,0, sol); 
     
       printf("Case #%d: %s\n",i+1,sol);
    }
}

bool solveMazeUtil(int maze[N][N], int x, int y, int count,char* sol) 
{ 
    // if (x,y is goal) return true 
    if(x == N-1 && y == N-1) 
    { 
          return true; 
    } 
  
    // Check if maze[x][y] is valid 
       if(x >= 0 && x < N && y >= 0 && y < N && A[x][y] == 0) 
    {    count++;
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x+1, y,count, sol) == true)
        { sol[count] = 'E'; return true;}
        
        if (solveMazeUtil(maze, x, y+1,count,sol) == true) 
             { sol[count] = 'S'; return true;}
        
    }
    
    if(x >= 0 && x < N && y >= 0 && y < N && A[x][y] == 1) 
    { 
        count++;
        if (solveMazeUtil(maze, x+1, y, count,sol) == true && A[x+1][y]==0)
        { sol[count] = 'E';  return true;}
        
        if (solveMazeUtil(maze, x, y+1,count, sol) == true && A[x][y+1]==0) 
             { sol[count] = 'S'; return true;}
    }
    return false; 
} 