#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000000

void findNewPath(int test, char *pathL, int N){
    long int grid[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)grid[i][j]=MAX;
    char lidGrid[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)lidGrid[i][j]='-';
    int lX=0, lY=0;
    for(int i=0;i<strlen(pathL);i++){
        if(pathL[i]=='S'){
            lY+=1;
        }else if(pathL[i]=='E'){
            lX+=1;
        }
        // grid[lY][lX]=-1;
        lidGrid[lY][lX]=pathL[i];
    }
/*
    printf("lid path:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%c\t", lidGrid[i][j]);
        }
        printf("\n");
    }
*/
    grid[0][0]=0;
    long int counter=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int cur=grid[i][j];
            if(cur==MAX)cur=0;
            if(cur!=-1){
                if(i!=N-1){
                    if(lidGrid[i+1][j]=='S' && grid[i+1][j]==MAX){
                        grid[i+1][j]=cur;
                    }else{
                        if(grid[i+1][j]==MAX){
                            grid[i+1][j]=cur+1;
                        }else if(grid[i+1][j]<cur+1){
                            grid[i+1][j]=cur+1;
                        }
                    }
                }
                if(j!=N-1){
                    if(lidGrid[i][j+1]=='E' && grid[i][j+1]==MAX){
                        grid[i][j+1]=cur;
                    }else{
                        if(grid[i][j+1]==MAX){
                            grid[i][j+1]=cur+1;
                        }else if(grid[i][j+1]<cur+1){
                            grid[i][j+1]=cur+1;
                        }
                    }
                }
            }            

        }
    }
/*
    printf("my path:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%ld\t", grid[i][j]);
        }
        printf("\n");
    }
*/
    counter=grid[N-1][N-1];
    char myPath[counter+1];
    myPath[counter]='\0';
    // counter-=1;
    int cX=N-1, cY=N-1;
    for(int i=counter-1; i>=0;i--){
        if(cY!=0 && grid[cY-1][cX]==counter-1 && lidGrid[cY][cX]!='S'){
            myPath[i]='S';
            counter-=1;
            cY-=1;
        }else if(cX!=0 && grid[cY][cX-1]==counter-1 && lidGrid[cY][cX]!='E'){
            myPath[i]='E';
            cX-=1;
            counter-=1;
        }
    }
/*
    for(int i=N-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            long int current=grid[i][j];
            if(i!=0 && grid[i-1][j]==current-1 && lidGrid[i][j]!='S'){
                myPath[counter]='S';
                    // printf("S");
                    counter-=1;
            }
            else if(j!=0 && grid[i][j-1]==current-1 && lidGrid[i][j]!='E'){
                myPath[counter]='E';
                    // printf("E");
                counter-=1;
            }
        }
    }
    */
    printf("Case #%d: %s\n",test, myPath);
}


int main(int argc, char const *argv[])
{
    int nbTest=0;scanf("%d", &nbTest);
    // printf("test cases: %d\n", nbTest);
    for(int i=0;i<nbTest;i++){
        int N;scanf("%d", &N);
        char pathL[2*N+3];scanf("%s", pathL);
        // printf("%d: %s\n", N, pathL);
        findNewPath(i+1, pathL, N);
    }
}