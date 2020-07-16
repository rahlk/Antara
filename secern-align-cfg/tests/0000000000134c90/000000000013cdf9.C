#include <stdio.h>

int main(){
  int t, a;
  int i, j, k, noWin;
  char c;
  char prog[256][501];
  char winProg[501];
  int mod;
  int R[500];
  int P[500];
  int S[500];
  int losers[256];
  scanf("%d", &t);

  for(i = 0; i < t; i++){
    for(j = 0; j < 500; j++){
      R[j] = 0;
      P[j] = 0;
      S[j] = 0;
      if(j < 255) losers[j] = 0;
    }
    scanf("%d", &a);
    for(j = 0; j < a; j++){
      scanf(" %s", &prog[j]);
    }
    noWin = 0;
    for(j = 0; j < 500; j++){
      for(k = 0; k < a && losers[k] == 0; k++){
        mod = 0;
        if(prog[k][j] == '\0'){
          mod = k;
        }
        if(mod == 0){
          c = prog[k][j];
        }else {
          c = prog[k%mod][j];
        }
        if(c == 'R'){
          R[j]++;
        } else if(c == 'P'){
          P[j]++;
        }else if(c == 'S'){
          S[j]++;
        }
      }

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

      for(k = 0; k < a; k++){
        if(prog[k][j] == 'R' && winProg[j] == 'P') losers[k] = 1;
        else if(prog[k][j] == 'P' && winProg[j] == 'S') losers[k] = 1;
        else if(prog[k][j] == 'S' && winProg[j] == 'R') losers[k] = 1;
      }

    }
    if(noWin == 1){
      printf("Case #%d: IMPOSSIBLE\n", i+1);
    }
    else{
      printf("Case #%d: %s\n", i+1, winProg);
    }
  }

  return 0;
}
