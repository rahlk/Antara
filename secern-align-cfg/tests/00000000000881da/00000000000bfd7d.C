#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  int t,tIterator=0;
  scanf("%d",&t);

  while(tIterator<t){
      tIterator++;

      int n;
      char *lydia;
      lydia = (char *)malloc(100001);
      scanf("%d%s",&n,lydia);

      char *me;
      me = (char *)malloc(100001);

      for(int i=0;i<strlen(lydia);i++){
        if(lydia[i]=='E'){
          me[i]='S';
        }else{
          me[i]='E';
        }
      }

      printf("Case #%d: %s\n",tIterator,me);
  }
  return 0;
}
