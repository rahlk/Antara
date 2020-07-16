#include<stdio.h>
int main(){
  int loop=0;
  scanf("%d",&loop);
  fflush(stdin);
  
  for(int i=0;i<loop;i++){
    int size=0;
    int length=0;
    
    scanf("%d",&size);
    fflush(stdin);
    length=2*(size-1);
    
    char lydia[length];
    scanf("%s",&lydia);
    fflush(stdin);
    
    for(int j=0;j<2*(size-1);j++){
      if(lydia[j]=='E'){
         lydia[j]='S';
      }else{
         lydia[j]='E';
      }
    }
    printf("Case #%d: %s/n",i+1,lydia);
  }
return 0;
}
