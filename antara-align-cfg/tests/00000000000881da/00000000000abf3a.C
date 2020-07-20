#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void solve(){
  int T,L;
  char P[100000];
  scanf("%d",&T);
  for(int i = 1;i<=T;i++){
    scanf("%d",&L);
    scanf("%s",P);
    L = (L-1)*2;
    for(int j = 0;j<L;j++){
      if(P[j]=='S')
        P[j] = 'E';
      else
        P[j] = 'S';
    }
    printf("Case #%d: %s\n",i,P);
  }
}

int main(){
  solve();
  return 0;
}
