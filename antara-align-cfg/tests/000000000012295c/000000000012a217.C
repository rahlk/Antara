#include <stdio.h>
#include <string.h>
#include <stdio.h>

#define filename "text.txt"
#define maxR 100
#define maxC 100
typedef  struct{
    int x;
    int y;
    char dir;
}persona;

void azzera(int grid[][maxC],int mg);
void stampamat(int grid[][maxC],int mg);

int dist(int mx, int my, int nx, int ny){
    if(mx+my > nx+ny) return 1;
    else return 0;
}

int trovamas(int grid[][maxC], int mg, int *x, int *y){
    int i,j,k;
    int max=0;
    *x=mg;
    *y=mg;
    for(i=0;i<mg;i++){
        for(j=0;j<mg;j++){
            //if(grid[i][j]==max) k++;
            //printf("%d\n",grid[i][j]);
            if(grid[i][j]>max){
                max = grid[i][j];
                *y = mg-i;
                *x = j;
            }
            else {
                if (grid[i][j] == max) {
                    //printf("%d-->%d\n", grid[i][j], max);
                    if (dist(*x, *y, j, mg - i)) {
                        max = grid[i][j];
                        *y = mg - i;
                        *x = j;
                    }
                }
            }
        }
    }
    return 1;
}

int main() {

    FILE *f = fopen(filename, "r");
    int nTEST,n,p,i,j,mas,x,y;
    persona people[500];
    int grid[maxR][maxC];
    int maxPEOPLE, maxGRID;
    fscanf(f,"%d",&nTEST);
    //scanf("%d",&nTEST);
    for(n=0;n<nTEST;n++){
        printf("Case #%d: ",n+1);
        //fscanf(f,"%d %d", &maxPEOPLE, &maxGRID);
        scanf("%d %d", &maxPEOPLE, &maxGRID);
        azzera(grid, maxGRID);
        for(p=0;p<maxPEOPLE;p++){
            //fscanf(f,"%d %d %c",&people[p].x, & people[p].y, &people[p].dir);
            scanf("%d %d %c",&people[p].x, & people[p].y, &people[p].dir);

            // aumento i pesi nella griglia
            switch (people[p].dir){
                case 'N':
                    //for(j=people[p].x;j>=0;j--){
                      //  for(i=people[p].y;i>=0;i--){grid[i][j]++;}
                    //}
                    for(j=0;j<maxGRID;j++){
                        for(i=maxGRID-people[p].y-1;i>=0;i--){
                            grid[i][j]++;
                        }
                    }
                    break;
                case 'S':
                    for(j=0;j<maxGRID;j++){
                        for(i=maxGRID-people[p].y+1;i<maxGRID;i++){
                            grid[i][j]++;
                        }
                    }
                    break;
                case 'E':
                    for(j=0;j<maxGRID;j++){
                        for(i=people[p].x+1;i<maxGRID;i++){
                            grid[j][i]++;
                        }
                    }
                    break;
                case 'W':
                    for(j=0;j<maxGRID;j++){
                        for(i=0;i<people[p].x;i++){
                            grid[j][i]++;
                        }
                    }
                    break;
                default:
                    break;

            }
            
        }


        mas = trovamas(grid,maxGRID,&x,&y);
        if(mas==1){

            printf("%d %d\n",x,y);
        }
        

    }

    return 0;
}

void azzera(int grid[][maxC],int mg){
    int i,j;
    for(i=0;i<mg;i++){
        for(j=0;j<mg;j++){
            grid[i][j]=0;
        }

    }
}
void stampamat(int grid[][maxC],int mg){
    int i,j;
    for(i=0;i<mg;i++){
        for(j=0;j<mg;j++){
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
