#include<stdio.h>
#include<stdlib.h>

int T,X,Y;
int ans[400][2];

void genans(){
  int axis,total=X*Y,base;
  if((X==3&&Y==4)||(X==4&&Y==3)){
    if(X==3&&Y==4)
      axis = 0;
    else
      axis = 1;
    for(int i = 0;i<2;i++){
      ans[i*3][0] = 1;
      ans[i*3][1] = 4-i;
      ans[i*3+1][0] = 2;
      ans[i*3+1][1] = 2-i;
      ans[i*3+2][0] = 3;
      ans[i*3+2][1] = 4-i;
    }
    ans[6][0] = 1;
    ans[7][0] = 3;
    ans[8][0] = 2;
    ans[9][0] = 1;
    ans[10][0] = 3;
    ans[11][0] = 2;
    ans[6][1] = 2;
    ans[7][1] = 1;
    ans[8][1] = 4-1;
    ans[9][1] = 1;
    ans[10][1] = 2;
    ans[11][1] = 4-0;
  }
  else{
    if(Y>=5){
      axis=0;
    }
    else{
      axis = X;
      X = Y;
      Y = axis;
      axis=1;
    }
    if(X%2==1){
      for(int i = 0;i<Y-2;i++){
        ans[i*3][0] = 1;
        ans[i*3][1] = Y-i;
        ans[i*3+1][0] = 2;
        ans[i*3+1][1] = Y-2-i;
        ans[i*3+2][0] = 3;
        ans[i*3+2][1] = Y-i;
      }
      ans[(Y-2)*3][0] = 1;
      ans[(Y-2)*3+1][0] = 3;
      ans[(Y-2)*3+2][0] = 2;
      ans[(Y-1)*3][0] = 1;
      ans[(Y-1)*3+1][0] = 3;
      ans[(Y-1)*3+2][0] = 2;
      ans[(Y-2)*3][1] = 2;
      ans[(Y-2)*3+1][1] = 1;
      ans[(Y-2)*3+2][1] = Y-1;
      ans[(Y-1)*3][1] = 1;
      ans[(Y-1)*3+1][1] = 2;
      ans[(Y-1)*3+2][1] = Y;
      base = 3;
    }
    else{
      base = 0;
    }
    while(base<X){
      for(int i = 0;i<3;i++){
        ans[base*Y+i*2][1]=Y-2+i;
        ans[base*Y+i*2][0]=base+2;
        ans[base*Y+i*2+1][1]=i+1;
        ans[base*Y+i*2+1][0]=base+1;
      }
      for(int i=0;i<Y-3;i++){
        ans[base*Y+i*2+6][1]=i+1;
        ans[base*Y+i*2+6][0]=base+2;
        ans[base*Y+i*2+7][1]=i+4;
        ans[base*Y+i*2+7][0]=base+1;
      }
      base+=2;
    }
  }
  for(int i = 0;i<total;i++)
    printf("%d %d\n",ans[i][axis],ans[i][1-axis]);
}

void solve(){
  scanf("%d",&T);
  for(int i = 1;i<=T;i++){
    scanf("%d%d",&X,&Y);
    if((X==1||Y==1)||(X==2&&Y<5)||(X<5&&Y==2)||(X==3&&Y<4)||(X<4&&Y==3)||(X==4&&Y==4))
      printf("Case #%d: IMPOSSIBLE\n",i);
    else{
      printf("Case #%d: POSSIBLE\n",i);
      genans();
    }
  }
  return;
}

int main(){
  solve();
  return 0;
}
