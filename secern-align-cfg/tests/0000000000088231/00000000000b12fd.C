#include<stdio.h>
#include<stdlib.h>
int main(){
	int o,o1=0,a,b,N;
	scanf("%d",&o);
	do{
		scanf("%d",&N);
		a = rand() % N + 1;
		b=N-a;
		printf("Case %d:%d %d",o1+1,a,b);
		o1++;
	}while(o1<o);}