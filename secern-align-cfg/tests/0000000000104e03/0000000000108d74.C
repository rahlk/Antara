#include<stdio.h>
//#include<conio.h>
int FLAG[20][20];
int m,n;
int ANS[400][2];
int iANS=0;
int qi=1;
const int MOVE[8][2]={
  {-2,1},
  {-2,-1},
  {2,1},
  {2,-1},
  {1,-2},
  {-1,-2},
  {1,2},
  {-1,2}
};

void FINDMAN(int nx,int ny,int kao){
  if(iANS==0){
  if(kao<m*n-1){
      FLAG[nx][ny]=1;
      ANS[kao][0]=nx;
      ANS[kao][1]=ny;
      //printf("DOING AT %d %d (%d)\n",nx,ny,kao);
      //for(int i=0;i<m;i++){for(int j=0;j<n;j++)printf("%d ",FLAG[i][j]);printf("\n");}
      //getch();
      for(int i=0;i<8;i++){
          if(nx+MOVE[i][0]>=0&&ny+MOVE[i][1]>=0&&nx+MOVE[i][0]<m&&ny+MOVE[i][1]<n&&FLAG[nx+MOVE[i][0]][ny+MOVE[i][1]]!=1){
              FINDMAN(nx+MOVE[i][0],ny+MOVE[i][1],kao+1);
                FLAG[nx+MOVE[i][0]][ny+MOVE[i][1]]=0;
                //printf("REWIND %d <%d,%d><<<<<\n",kao,nx+MOVE[i][0],ny+MOVE[i][1]);
          }
      }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==nx)goto maii;
            if(j==ny)goto maij;
            if(nx-i!=ny-j&&nx+ny!=i+j&&FLAG[i][j]!=1){
                FINDMAN(i,j,kao+1);
                FLAG[i][j]=0;
                //printf("REWIND %d <%d,%d><<<<<\n",kao,i,j);
            }


            maij:;
        }
        maii:;
      }
      return;
  }
  ANS[kao][0]=nx;
  ANS[kao][1]=ny;
    printf("Case #%d: POSSIBLE\n",qi);
    for(int i=0;i<m*n;i++)printf("%d %d\n",ANS[i][0]+1,ANS[i][1]+1);
    iANS=1;
  }
}


int main(){
    int q;scanf("%d",&q);
    for(;qi<=q;qi++){
        scanf("%d %d",&m,&n);
        iANS=0;

        for(int i=0;i<m;i++)for(int j=0;j<n;j++){
          for(int i=0;i<m;i++)for(int j=0;j<n;j++)FLAG[i][j]=0;
          if(iANS==0)FINDMAN(i,j,0);
          else goto tob;
        }
        printf("Case #%d: IMPOSSIBLE\n",qi);
        tob:;
    }
}
