
#include <stdio.h>

void job();

int main(){

  int t;
  scanf("%d", &t);

  for(int i=1; i<=t; i++){
    printf("Case #%d: ", i);
    job();
    printf("\n");
  }


  return 0;
}

void job(){
  char ggg = 'E' ^ 'S';
  int n,m;
  int goodp=-1;
  int movesp=0;
  char cur;

  scanf("%d%c", &m, &cur);
  n = m*2 - 2;

  for(int i=0; i<n; i++){
    scanf("%c", &cur);
    printf("%c",cur^ggg);
  }
}
