#include <stdio.h>
int main(void) {
  int n,test,temp,flag=0,count=1,number1=0,number2=0,t=1;

  scanf("%d",&test);


  while(test>0){
  flag=0,count=1,number1=0,number2=0;
  scanf("%d",&n);
  temp=n/2;
  while(temp!=0){
    if(temp%10==4){
    number1=number1+(temp%10-1)*count;
    number2=number2+(temp%10+1)*count;
    count=count*10;
    }
    else{
    number1=number1+(temp%10)*count;
    number2=number2+(temp%10)*count;
    count=count*10;
    }
    temp=temp/10;
  }
  if((n%10)%2!=0){
    number2=number2+1;
  }
  printf("Case #%d : %d %d\n",t,number1,number2);
  test--;
  t++;
  }
  return 0;
}