#include<stdio.h>

int main(){
    
    
  
  int N,temp,factor=1;
  int A,B;
  
  printf("Enter a number: ");

  scanf("%d",&N);

  temp=N;

  while(temp){

      temp=temp/10;

      factor = factor*10;

  }

  printf("Each digits of given number are: ");

  while(factor>1){

      factor = factor/10;

      printf("%d ",N/factor);
      
      while(A+B==N){
            if(N/factor==4){
                printf("%d  %d",A,B);}

      N = N % factor;
      
      
  }
      

  }
  
 

  return 0;

}
