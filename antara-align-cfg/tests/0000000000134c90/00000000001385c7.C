#include <stdio.h>

int main(){
  int t, a;
  int i, j, k, noWin;
  char c;
  char prog[501];
  char winProg[501];
  int mod;
  int R[500];
  int P[500];
  int S[500];
  scanf("%d", &t);

  for(i = 0; i < t; i++){
    for(j = 0; j < 500; j++){
      R[j] = 0;
      P[j] = 0;
      S[j] = 0;
    }
    scanf("%d", &a);
    for(j = 0; j < a; j++){
      scanf(" %s", &prog);
      mod = 0;
      for(k = 0; k < 500; k++){
        if(prog[k] == '\0'){
          mod = k;
        }
        if(mod == 0){
          c = prog[k];
        }else {
          c = prog[k%mod];
        }
        if(c == 'R'){
          R[k]++;
        } else if(c == 'P'){
          P[k]++;
        }else if(c == 'S'){
          S[k]++;
        }
      }
    }
    noWin = 0;
    for(j = 0; j < 500; j++){
      if(R[j] == 0){
        if(P[j] == 0){
          winProg[j+1] = 'R';
          winProg[j+1] = '\0';
          break;
        }
        else if(S[j] == 0){
          winProg[j] = 'S';
          winProg[j+1] = '\0';
          break;
        }
        else {
          winProg[j] = 'S';
        }
      }
      else if(P[j] == 0){
        if(S[j] == 0){
          winProg[j] = 'P';
          winProg[j+1] = '\0';
          break;
        }
        else {
          winProg[j] = 'R';
        }
      }
      else if(S[j] == 0){
        winProg[j] = 'P';
      }
      else{
        noWin = 1;
        break;
      }
    }
    if(noWin == 1){
      printf("Case #%d: IMPOSSIBLE\n", t+1);
    }
    else{
      printf("Case #%d: %s\n", t+1, winProg);
    }
  }

  return 0;
}
