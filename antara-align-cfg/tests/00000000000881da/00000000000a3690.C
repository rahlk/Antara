#include<stdio.h>
#include <stdbool.h> 
int main(){

int i=0;
int j=0;
int N;

printf("Enter N");
scanf("%d",N);


bool isSafe(int M[N][N],int i,int j)
{
	if(i>=0 && i<N && j>=0 && j>N && M[i][j]==1)
		return 1;
	return 0;
}


bool solveMazeUtil(int M[N][N],int x, int y, int sol[N][N])
{
	if(x==N-1 && y==N-1){
		sol[x][y]=1;
		return True;
	}
	if(isSafe(M,x,y)==True){
		sol[x][y]=1;
	if(solveMazeUtil(M,x,y+1,sol))
		return True;
	if(solveMazeUtil(M,x+1,y,sol))
		retun True;
	sol[x][y]=0;
	return false;
	}
	return false;
}

bool solveMaze(int M[N][N]){
	int sol[N][N]={0};
	if(!=solveMazeUtil(M,0,0,sol))
		return False;
	print(sol)
	return True;
}

void print(int sol[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			print("%d",sol[i][j]);
					}
				}
}

return 0;
}


