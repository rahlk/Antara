#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void print(int idx,char* A,char* B,int offset){
  printf("Case #%d: %s %s\n",idx,A,&B[offset]);
  return;
}

void solve(){
  int T,len,set;
  char target[20];
  char sol[2][20];
  scanf("%d",&T);
  for(int i = 1;i<=T;i++){
    scanf("%s",target);
    len = strlen(target);
    set = -1;
    sol[0][len] = '\0';
    sol[1][len] = '\0';
    for(int j = 0;j<len;j++){
      if(target[j]=='4'){
        if(set==-1)
          set = j;
        sol[0][j] = '2';
        sol[1][j] = '2';
      }
      else{
        sol[0][j] = target[j];
        sol[1][j] = '0';
      }
    }
    print(i,sol[0],sol[1],set);
  }
  return;
}

int main(){
  solve();
  return 0;
}
