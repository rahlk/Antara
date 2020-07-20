#include <stdio.h>
#include <stdlib.h>

void genpath(char* lpath, int dimension){
  for(int i = 0 ; i < dimension ; i++ ){
    if(lpath[i] == 'S') lpath[i] = 'E';
      else lpath[i] = 'S';
  }
}

int main(){
  int t;
  scanf("%d",&t);

  int dimension;
  
  char** lpath = (char**)malloc(t*sizeof(char*));
  
  for(int i = 0 ; i < t ; i++){
    scanf("%d\n",&dimension );
    dimension = 2*dimension-2;
    lpath[i] =(char*) malloc(dimension*sizeof(char));
    gets(lpath[i]);
    genpath(lpath[i], dimension);
    printf("Case #%d: %s\n",i+1,lpath[i] );
  }
  
  return 0;
}