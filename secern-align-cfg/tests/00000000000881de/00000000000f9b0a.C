#include <stdio.h>

int main() {
  char test[5][1025];
  char res[5][1025];
  int ans[15];
  for(int j=0; j<1024; j++)
    for(int i=0; i<5; i++)
      test[i][j]=j&(1<<i)?'1':'0';
  int T;
  scanf("%d", &T);
  for(int t=1; t<=T; t++){
    int N, B, F;
    scanf("%d %d %d", &N, &B, &F);
    for(int i=0; i<5; i++){
      test[i][N]=0;
      printf("%s\n", test[i]);
      test[i][N]=N&(1<<i)?'1':'0';
      fflush(stdout);
      scanf("%s", res[i]);
    }
    int *p=ans;
    for(int index, pos=0; pos<N; pos++){
      if(res[4][index]==test[4][pos] && 
         res[3][index]==test[3][pos] && 
         res[2][index]==test[2][pos] && 
         res[1][index]==test[1][pos] && 
         res[0][index]==test[0][pos] ){
        index++;
      }
      else{
        *(p++)=pos;
      }
    }
    for(int i=0; i<B-1; i++)
      printf("%d ", ans[i]);
    printf("%d\n", ans[B-1]);
    fflush(stdout);
    int r;
    scanf("%d", &r);
    if(r==-1)
      break;
  }
}
