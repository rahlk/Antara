#include <stdio.h>

int mypow(int b,int e){
	if(e==0)return 1;
	int i;
	for(i=1;i<e;i++)
		b=b*10;
	return b;
}
int numberSizecheck(int a){
	int base10;
	base10=10;
	int i=1;

	while(a>base10){	
		base10*=10;
		i++;
	}
	return i;
}

void initvector(int a,int*vector,int size){
	
	int cifraX;
	long double div,div2;
	div=a;
	int i;
	for(i=size-1;i>=0;i--){
		div=div/10;
		div2=10.1*(long double)(div-((long int)div));
		cifraX=div2;
		vector[i]=cifraX;
		
	}
}
int checkNumber(long int *in, long int *out1, long int *out2){

	
	
	int size=numberSizecheck(*in);
	int middle=size/2;
	int vector[size];
	int vector1[size];
	int vector2[size];
	int i;
	int fourin=0;
	for ( i=0;i<=size;i++){
		vector[i]=0;
		vector1[i]=0;
		vector2[i]=0;
	}
	initvector(*in,vector,size);
	for(i=0;i<middle;i++){
		if(vector[i]==4){
			vector2[i]=vector[i]-1;
			vector1[i]=1;
			fourin=1;
		}
		else{
			vector2[i]=vector[i];
			vector1[i]=0;
		}		
	}
	for(i=middle;i<size;i++){
		if(vector[i]==4){
			vector1[i]=vector[i]-1;
			vector2[i]=1;
			fourin=1;
		}	
		else{
			vector1[i]=vector[i];
			vector2[i]=0;
		}
	}
 	*out1=0;
	*out2=0;
	
	for(i=0;i<size;i++)
	{
		*out1+=vector1[i]*mypow(10,(size-i-1));
		*out2+=vector2[i]*mypow(10,(size-i-1));
	}
	return fourin;
}
int main(){
	
	int test=0;
	long int out1,out2;
	int cas=1;
	int i;
	int a=scanf("%d",&test);
	long int input[test];
	for(i=0;i<test;i++){
		scanf("%ld",&input[i]);
	if(checkNumber(&input[i],&out1,&out2)==1){
    	printf("Case #%d: %ld %ld\n",cas,out1,out2);
    	cas++;
	}}
	return 0;
}
