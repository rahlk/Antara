#include<stdio.h>

int main(){
  int t;scanf("%d",&t);
  for(int ti=0;ti<t;ti++){
      int p,q;scanf("%d %d",&p,&q);
      int MAP[q+1][q+1];for(int i=0;i<=q;i++)for(int j=0;j<=q;j++)MAP[i][j]=0;
      for(int i=0;i<p;i++){
          int x,y;char d;scanf("%d %d %c",&x,&y,&d);
          //IMOS METHOD :)
          if(d=='N'){
              MAP[0][0]++;
              MAP[q-y][0]--;
          }
          else if(d=='S'){
            MAP[q-y+1][0]++;
          }
          else if(d=='W'){
              MAP[0][0]++;
              MAP[0][x]--;
          }
          else if(d=='E'){
            MAP[0][x+1]++;
          }
      }

          //printf("BEFORE!! IMOS MAN..\n");
          //for(int i=0;i<=q;i++){for(int j=0;j<=q;j++)printf("%d ",MAP[i][j]);printf("\n");}

          for(int i=0;i<=q;i++)for(int j=1;j<=q;j++)MAP[i][j]+=MAP[i][j-1];
          for(int j=0;j<=q;j++)for(int i=1;i<=q;i++)MAP[i][j]+=MAP[i-1][j];

          int mx=0,my=q;
          for(int i=q;i>=0;i--)for(int j=0;j<=q;j++){
              //printf("AT <%d,%d> is %d\n",i,j,MAP[i][j]);
              if(MAP[i][j]>MAP[my][mx]){
                  //printf("NEW MAX AT mx = %d my = %d\n",i,j);
                  mx = j;my = i;
              }
          }



          //printf("AFTER IMOS MAN..\n");
          //for(int i=0;i<=q;i++){for(int j=0;j<=q;j++)printf("%d ",MAP[i][j]);printf("\n");}
          printf("Case #%d: %d %d\n",ti+1,mx,q-my);



  }

    return 0;
}
