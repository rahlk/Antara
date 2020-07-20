#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int r,i,num[0];
  srand(time(NULL));
  r = rand()%(999-100+1)+100;

  printf("Here is the wininng number%d\n",r);

  printf("Enter three digit number to win lottery:\n");
  scanf("%d",num);

  for(i=0;i<3;i++){

    if(r==num[0]){
        printf("For three exact match you get $100,000\n");
    }else if((r/10)==(num[1]/10)){
        printf("For two number match you get $50,000\n");
    }else if((r%10)==(num[]%10)){
        printf("For one number match you get $10,000\n");
    }else{
        printf("You get nothing!\n");
    }}

}