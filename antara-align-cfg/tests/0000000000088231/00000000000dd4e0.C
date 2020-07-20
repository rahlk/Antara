#include <stdio.h>
#include <math.h>

int mypow(int b,int e){
	if(e==0)return 1;
	for(int i=1;i<e;i++)
		b=b*10;
	return b;
}

int numberSizecheck(int a){
	int base10;
	base10=10;
	int i=1;

	while(a>base10)
	{
		
		
		base10*=10;
		i++;
	}
	return i;
}

void initvector(int a,int*vector,int size){
	
	int cifraX;
	long double div,div2;
	div=a;
	
	for(int i=size-1;i>=0;i--){
		div=div/10;
		div2=10.1*(long double)(div-((long int)div));
		printf("cifra:%Lf\n",div2);
		cifraX=div2;
		vector[i]=cifraX;
		
	}
}

void checkNumber( long int *in, long int *out1, long int *out2){

	
	
	int size=numberSizecheck(*in);
	int middle=size/2;
	int vector[size];
	int vector1[size];
	int vector2[size];
	for (int i=0;i<=size;i++){
		vector[i]=0;
		vector1[i]=0;
		vector2[i]=0;
	}
	initvector(*in,vector,size);
	
	for(int i=0;i<middle;i++){
		if(vector[i]==4){
			vector2[i]=vector[i]-1;
			vector1[i]=1;
		}
		else{
			vector2[i]=vector[i];
			vector1[i]=0;
		}
	}
	for(int i=middle;i<size;i++){
		if(vector[i]==4){
			vector1[i]=vector[i]-1;
			vector2[i]=1;
		}	
		else{
			vector1[i]=vector[i];
			vector2[i]=0;
		}
		
	}
 	*out1=0;
	*out2=0;
	
	for(int i=0;i<size;i++)
	{
		*out1+=vector1[i]*mypow(10,(size-i-1));
		*out2+=vector2[i]*mypow(10,(size-i-1));
	}
}
int main(){
	long  int input;
	long  int out1,out2;
	scanf("%ld",&input);
	checkNumber(&input,&out1,&out2);
	printf("%ld\n",out1);
	printf("%ld\n",out2);
	return 1;
}
