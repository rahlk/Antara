#include<stdio.h>
#include<stdlib.h>

int main(){
int N;
int A,B;
int T;

printf("Enter Number of test cases");
scanf("%d",T);

printf("Enter Number");
scanf("%d",N);




    
      int temp,factor=1;

  printf("Enter a number: ");

  scanf("%d %d",&A,&B);

  temp=A;
  temp1=B;

  while(temp,temp1){

      temp=temp/10;
      
      temp1=temp1/10;

      factor = factor*10;

  }

  printf("Each digits of given number are:\n");

  while(factor>1){

      factor = factor/10;

      printf("%d %d ",A/factor,B/factor);

      A = A * factor;
      B = B * factor

}

    if(A!=4 && B!=4 && A+B=N){
    
        int T=0;
        switch(T){
        
            case 1:
            
            printf("A & B are %d %d",A,B);
            
            case 2:
            
            printf("A & B are %d %d",A,B);
            
            case 3:
            
            printf("A & B are %d %d",A,B);
            
            
        }
    }
    
    else{
        
        printf("failed attempt");
    }

return 0;
}