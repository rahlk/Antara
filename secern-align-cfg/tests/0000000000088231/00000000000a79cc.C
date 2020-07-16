#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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




RemoveFours(int a,int b){

int x,y;
int i;
int FinalA=0,FinalB=0;
i = 100000;


	
do{


	x = a/ i;
	y = b/ i;

	if(x ==0 && y==0){
		
	} else if(x==0 && y!=0) {
	FinalA += x  * i;
	FinalB += y * i; 
	b%=i;
	
	} else {
	
	
	if(x==4||y==4){
		x-=1;
		y+=1;
	}
	FinalA += x * i;
	FinalB += y * i;
	
    a%=i;
	b%=i;
	
}
	
	i/=10;
}while(i!=0);
printf(" %d %d\n",FinalA,FinalB);

}

main(){

int x=1;
int a,b;


for(x = 1; x < 100000;x++)
{
printf("Case #%d:",x);
if(DivisibleByTwo(x)==1) {
	b = GetAandB(x);
	a = b;
}
else {
	b= GetAandB(x);
	a = b;
	b = b + 1;	
}
RemoveFours(a,b);

}
}

