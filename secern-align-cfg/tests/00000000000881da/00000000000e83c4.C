#include <stdio.h>
int main(){
   // bool solveMazeUtil(int maze[N][N], int x, int y, char sol[p]);
    bool solveMazeUtil(int maze[N][N], int x, int y, char sol[p]) 
{ 
    // if (x,y is goal) return true 
    if(x == N-1 && y == N-1) 
    { 
          return true; 
    } 
  
    // Check if maze[x][y] is valid 
       if(x >= 0 && x < N && y >= 0 && y < N && A[x][y] == 0) 
    { 
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x+1, y, sol) == true)
        { sol[count] = 'E'; count++; return true;}
        
        if (solveMazeUtil(maze, x, y+1, sol) == true) 
             { sol[count] = 'S';count++; return true;}
        
    }
    
    if(x >= 0 && x < N && y >= 0 && y < N && A[x][y] == 1) 
    { 
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x+1, y, sol) == true && A[x+1][y]==0)
        { sol[count] = 'E'; count++; return true;}
        
        if (solveMazeUtil(maze, x, y+1, sol) == true && A[x][y+1]==0) 
             { sol[count] = 'S'; count++; return true;}
    }
    return false; 
} 
    int count =0;
    int i,p,j,k; int n; char c;
     int A[50000][50000] ={0};
      A[0][0]=1;
    scanf("%d\n",&n);
    for (i=0;i<n;i++){
        int a =0; int b=0; 
        scanf("%d\n",&j);
       
        for (k=0;k<j;k++){
          scanf("%c",&c);
          if (c=='E') b = b+1;
          if (c == 'S') a =a+1;
          A[a][b]=1;
        }
        scanf("\n");
        p = (j-1 )*2;
        count = 0;
        char sol[p];
        
     bool tr=solveMazeUtil(A[j][j],0, 0, sol[p]); 
     
       printf("Case #%d: %s\n",i+1,sol);
    }
}