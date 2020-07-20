#include<stdio.h>

int main() {
  int t, num,n, m=0,i;
  scanf("%d",&t);
  for (int j = 1; j <= t; ++j) {
      int digits=0;
      scanf("%d",&num);
      n=num;
      while(n>0){n/=10;digits++;}
      n=num;
      for(i=1;i<=digits;i++){
          m*=10;m+=1;
          if(n%10==5)m+=1; n/=10;
      }
      
      
      
    
    printf("Case #%d: %d %d \n",j,m,num-m);m=0;
  }
  
  return 0;
}