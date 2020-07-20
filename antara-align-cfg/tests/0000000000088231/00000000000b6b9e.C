#include<stdio.h>
#include<stdlib.h>

typedef struct{int a; int b;} split;
split splitNum(int N);

int main(){
	int numOfTests=0, i, N;
	split * r;

	//input section
	scanf("%d", &numOfTests);
	r = (split*)malloc(numOfTests*sizeof(split));

	//main algorithm
	for(i=0; i<numOfTests; i++){
		scanf("%d", &N);
		r[i] = splitNum(N);
	}

	for(i=0; i<numOfTests; i++) printf("Case #%d: %d %d\n", i+1, r[i].a, r[i].b);
	free(r);
	return 0;
}

split splitNum(int N){
	split r = {0,0};
	int tmp=0, i=1;
	while(N>0){
		tmp = N%10;
		if(tmp != 4) r.a += tmp*i;
		else {r.a = 1*i; r.b += 3*i;}
		i*=10;
		N/=10;
	}
	return r;
}