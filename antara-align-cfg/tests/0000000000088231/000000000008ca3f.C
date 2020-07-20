#include <stdio.h>
int main(){
int T,N,sub=1;
scanf("%d", &T);
for(int i=1;i<=T;i++){
   scanf("%d", &N);
   int temp=N;
   sub=1;
   while (temp>0){
       if(temp%10==4 && sub%10==0){
           sub=sub+1;
       }
       temp=temp/10;
       if(temp>0)
        sub=sub*10;
   }
   printf("Case #%d: %d %d\n", i, sub, N-sub);
}
return 0;
}