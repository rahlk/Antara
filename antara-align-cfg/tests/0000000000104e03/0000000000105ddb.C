#include<stdio.h>

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


int main(){
    int q;scanf("%d",&q);
    for(int qi=1;qi<=q;qi++){
        int m,n;scanf("%d %d",&m,&n);
        int FLAG[m][n];for(int i=0;i<m;i++)for(int j=0;j<n;j++)FLAG[i][j]=0;
        int ANS[m*n][2];
        int now[2] ={0,n/2};
        int ct=0;
        while(ct<m*n-1){
            FLAG[now[0]][now[1]]=1;
            ANS[ct][0]=now[0];
            ANS[ct][1]=now[1];
            ct++;
            //printf("%d %d\n",now[0],now[1]);
            for(int i=0;i<8;i++){
                if(now[0]+MOVE[i][0]>=0&&now[1]+MOVE[i][1]>=0&&now[0]+MOVE[i][0]<m&&now[1]+MOVE[i][1]<n&&FLAG[now[0]+MOVE[i][0]][now[1]+MOVE[i][1]]!=1){
                    now[0]+=MOVE[i][0];
                    now[1]+=MOVE[i][1];
                    goto mai;
                }
            }
            for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                  if(i==now[0])goto maii;
                  if(j==now[1])goto maij;

                  if(now[0]-i!=now[1]-j&&now[0]+now[1]!=i+j&&FLAG[i][j]!=1){
                      now[0]=i;
                      now[1]=j;
                      goto mai;
                  }


                  maij:;
              }
              maii:;
            }
            printf("Case #%d: IMPOSSIBLE\n",qi);
            goto Qmai;
            mai:;
        }
        ANS[ct][0]=now[0];
        ANS[ct][1]=now[1];
          printf("Case #%d: POSSIBLE\n",qi);
          for(int i=0;i<m*n;i++)printf("%d %d\n",ANS[i][0]+1,ANS[i][1]+1);
        Qmai:;
    }
}
