#include<stdio.h>
void findFunc(int x[][], int r, int c, int i, int j){
    x[i][j]=1;
    printf("%d %d\n", i, j);
    if(x[i][j]==0 && i+1<=r && j+2<=c && x[i+1][j+2]==0){
        findFunc(x,r,c,i+1, j+2);
    }
    else if(x[i][j]==0 && i-1>=0 && j+2<=c && x[i-1][j+2]==0){
        findFunc(x,r,c,i-1, j+2);
    }
    else if(x[i][j]==0 && i+1<=r && j-2>=0 && x[i+1][j-2]==0){
        findFunc(x,r,c,i+1, j-2);
    }
    else if(x[i][j]==0 && i-1>=0 && j-2>=0 && x[i-1][j-2]==0){
        findFunc(x,r,c,i-1, j-2);
    }
    else if(x[i][j]==0 && i-1>=0 && j-3>=0 && x[i-1][j-3]==0){
        findFunc(x,r,c,i-1, j-3);
    }
    else if(x[i][j]==0 && i-1>=0 && j+3<=c && x[i-1][j+3]==0){
        findFunc(x,r,c,i-1, j+3);
    }
    else if(x[i][j]==0 && i+1<=r && j-3>=0 && x[i+1][j-3]==0){
        findFunc(x,r,c,i+1, j-3);
    }
    else if(x[i][j]==0 && i+1<=r && j+3<=c && x[i+1][j+3]==0){
        findFunc(x,r,c,i+1, j+3);
    }
    else
    {
        for(int a=0;a<r;a++)
        {
            for(int b=0;b<c;b++)
            {
                if(x[a][b]==0 && a!=i && b!=j && a-b != i-j && a+b != i+j)
                {    
                    findFunc(x,r,c,a,b);
                    break;
                }
            }
        }
    }
}
int main(){
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int R, C;
        scanf("%d%d",&R,&C);
        int a[R][C];
        if((R==2 && C==2) ||(R==2 && C==3) ||(R==2 && C==4) || (R==3 && C==3) || (R==3 && C==2) || (R==4 && C==2))
            printf("Case #%d: IMPOSSIBLE\n", i);
        else
        {
            for(int j=0;j<R;j++)
            {
                for(int k=0;k<C;k++)
                    a[j][k]=0;
            }
            printf("Case #%d: POSSIBLE\n",i);
            findFunc(a, R, C, 1, 1);
        }         
    }
}