#include<stdio.h>

int main(){
  int t,n,i=1;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    if(n>=4){
        if(n%2==0){
            printf("Case #%d: %d %d\n",i,n/2,n/2);
        }else{

            printf("Case #%d: %d %d\n",i,n/2,n/2+1);
        }
        i++;
    }
  }
}
