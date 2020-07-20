#include <stdio.h>

#define MAX_MESSAGE 100

long MCD(long A, long B);
int add_array(long A, long *Array, int *len);

int main(){
	
	int T = 0;
	scanf("%d\n",&T);
	int i = 0;
	for (i=1;i<=T;i++){
		printf("Case #%d: ",i);
		int N = 0,L = 0;
		scanf("%d %d\n",&N,&L);
		
		//	Crear estructuras
		long Letters[26] = {0};
		int Letters_len = 0;
		
		long Text_Prime[MAX_MESSAGE] = {0};
		
		//	Primer paso MCD
		long A=0,B=0;
		long temp = 0;
		scanf("%ld %ld",&A,&B);
		temp = MCD(A,B);
		Text_Prime[1] = temp;
		Text_Prime[0] = A/temp;
		Text_Prime[2] = B/temp;
		add_array(Text_Prime[0],Letters,&Letters_len);
		add_array(Text_Prime[1],Letters,&Letters_len);
		add_array(Text_Prime[2],Letters,&Letters_len);
		temp = Text_Prime[2];
		
		//	Las demás letras
		int j=0;
		L++;
		for(j=3;j<L ; j++){
			
			scanf("%ld",&A);
			Text_Prime[j] = A/temp;
			add_array(Text_Prime[j],Letters,&Letters_len);
			temp = Text_Prime[j];
		}
		
		//	Decifrar
		char Text[MAX_MESSAGE]={0};
		
		char Current_Letter = 'A';
		for(j=0;j<Letters_len ; j++){
			int k=0;
			for(k=0;k < L; k++){
				if(Text_Prime[k]==Letters[j]){
					Text[k]= Current_Letter;
				}
			}
			Current_Letter ++;
		}
		
		//	Print
		for(j=0;j < L; j++){
			printf("%c",Text[j]);
		}
		printf("\n");
	}
		
	
	return 0;
}

long MCD(long A, long B){
	long tempA = A;
	long tempB = B;
	while(tempB!=tempA){
		if(tempA>tempB){
			tempA -= tempB;
		}else{
			tempB -= tempA;
		}
	}
	
	return tempA;
}

int add_array(long A, long *Array, int *len){
	
	int i =0;
	for (i=0; i < *len && Array[i]<A;i++){}
	int temp = A;
	if(temp!=Array[i]){
		for (i; i <= *len ;i++){
			temp ^= Array[i];
			Array[i] ^= temp;
			temp ^= Array[i];
		}
		(*len)++;
	}else if(i >= *len){
		(*len)++;
	}
	return 0;
}
