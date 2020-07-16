#include <stdio.h>
#include <stdlib.h>

int DivisibleByTwo(int x) {
	
	if(x%2 == 0){
		return 1;
	}
	else {
		return 0;
	}
	
}

int GetAandB(int x){

return x / 2;

}

int CheckAnswer(int a,int b, int i){

	if(b % i < 10){
		return i;
	}
	else{
		CheckAnswer(a,b,i*10);
	}
		
}



RemoveFours(int a,int b,int i){

int x,y;
int FinalA=0,FinalB=0;


     x = a / (i / 10);
  y = b / (i / 10);
  

  
  while(i != 1){
 
 
  
  if(((x == 0)||(y == 9)) && ((x==4)||(y==4) )){
  	x+=1;
  	y-=1;
  }
  else if((x == 4) || (y == 4)){
  	x -= 1;
  	y += 1;
 
  }else{ 	
  
  	FinalA += x * i;
  	FinalB += y * i;
  	
  	a%= i;
  	b%= i;
  	
  	x = a / (i / 10);
  y = b / (i / 10);
  	i/= 10;
  	   
  }
  

  }
  FinalA /= 10;
  FinalB /= 10;
  
  printf("%d %d\n",FinalA,FinalB);
}


main(){

int x=1;
int a,b;
int i;



for(x = 2; x < 100000;x++)
{
printf("Case #%d: ",x);
if(DivisibleByTwo(x)==1) {
	b = GetAandB(x);
	a = b;
	i = CheckAnswer(a,b,10);
}
else {
	b= GetAandB(x);
	a = b;
	b = b + 1;
	i = CheckAnswer(a,b,10);
	
}


RemoveFours(a,b,i);
}
}

