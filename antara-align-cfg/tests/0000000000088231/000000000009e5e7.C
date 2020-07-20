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

      if(N/factor==4){
        for(A=0;A<10000;A++){
          for(B=0;B<10000;B++){
            if(A+B==N){
              printf("%d",A);
              printf("%d",B);

        }
      }
    }
      }



      N = N % factor;


  }







  return 0;

}
