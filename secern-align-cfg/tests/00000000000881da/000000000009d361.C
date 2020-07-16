#include<stdio.h>
#include<stdlib.h>

int main(){
  int T,t=0,n;
  char c;
  scanf("%i",&T);
  for(t=0;t<T;t++){
    printf("Case #%i: ", t+1);
    scanf("%i\n", &n);
    
    while((c=getchar())!=EOF && c!='\n')
      printf("%c", (c == 'S'?'E':'S'));
    printf("\n");
  }
}