#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  char stock[100010];
  fgets(stock,100010,stdin);
  int NB_cases=atoi(stock);
  int cnt=0;
  int i=0;
  int grille;
  while(cnt<NB_cases){
    cnt++;
    fgets(stock,100010,stdin);
    grille=atoi(stock);
    fgets(stock,100010,stdin); //path
    i=0;
    printf("Case #%d: ",cnt);
    while (stock[i]!=0 && stock[i+1]!=0){
      if (stock[i] == 'S'){
        printf("E");
      } else {
        printf("S");
      }
      i++;
    }
    printf("\n");
  }
  return 0;
}
