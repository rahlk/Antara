#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int size;
    scanf("%d",&size);
    getchar();
    char x[2*size - 2];
    char ans[2*size - 2];
    for(int j=0;j<2*size - 2;j++){
      scanf("%c",&x[j]);
      if(x[j]=='E'){
        ans[j]='S';
      }
      else{
        ans[j]='E';
      }
    }
    printf("Case #%d: %s\n",i+1,ans);
  }
}
