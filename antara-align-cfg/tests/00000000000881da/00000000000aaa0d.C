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
  
  char* lpath; 
  
  for(int i = 0 ; i < t ; i++){
    scanf("%d\n",&dimension );
    dimension = 2*dimension-2;
    lpath = (char*)malloc(dimension*sizeof(char));
    gets(lpath);
    genpath(lpath, dimension);
    printf("Case #%d: %s\n",i+1,lpath );
  }
  
  return 0;
}