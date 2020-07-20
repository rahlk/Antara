#include<stdio.h>

int main(){
  int T,N,i=1;
  scanf("%d",&T);
  while(T--){
    scanf("%d",&N);
    if(N>=4){
        if(N%2==0){
            printf("Case #%d: %d %d\n",i,N/2,N/2);
        }else{

            printf("Case #%d: %d %d\n",i,N/2,N/2+1);
        }
        i++;
    }
  }
}
