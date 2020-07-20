#include<stdio.h>
#include<stdlib.h>

int findFirstPrime(int num);
int sortPrimes(int*, int*);
int findIndex(int, int*, int);
void swap(int*, int*);

int main(){
	int numOfTests=0, i, j, temp=0, N, rid;
	int* letters;
	char** enc;
	int sort[26];

	//input section
	scanf("%d", &numOfTests);
	enc = (char**)malloc(sizeof(char*)*numOfTests);

	for(i=0; numOfTests>i; i++){
		scanf("%d %d",&rid, &N);
		letters = (int*)malloc(sizeof(int)*(N+1));
		enc[i] = (char*)malloc(sizeof(char)*(N+2)); enc[i][N+1]=0;

		scanf("%d", &temp);
		letters[0] = findFirstPrime(temp);
		letters[1] = temp/letters[0];
		for(j=1; j<N; j++) {
			scanf("%d", &temp);
			letters[j+1] = temp / letters[j];
		}
		sortPrimes(letters, sort);
		for(j=0; j<=N; j++)
			enc[i][j] = findIndex(letters[j], sort, 26) + 'A';

		free(letters);

	}

	//output section
	for(i=0; i<numOfTests; i++){
		printf("Case #%d: %s\n", i+1, enc[i]);
		free(enc[i]);
	}
	free(enc);
	return 0;
}

int findFirstPrime(int num){
	int i, r;
	if(num%2==0) r = 2;
	else
		for(i=3; i<num; i+=2)
			if(num%i==0) {r = i; break;}
			return r;
}
int sortPrimes(int* letters, int* sort){
	int*p=letters, i=0, j=0;
	sort[0] = letters[0];
	while(1){
		if(findIndex(*p, sort, i+1)!=-1){}
		else if(*p > sort[i]) sort[++i]=*p;  
		else if(*p < sort[i]){
			sort[++i] = *p;
			j = i;
			while(sort[j]<sort[j-1] && j!=0){
				swap(sort+j, sort+j-1); j--;
			}
		}
		if(i == 25) break;
		p++;
	}
	/*
	puts("============");
	for(i=0; i<26;i++) printf("%d ", sort[i]);
	puts("\n============");
	*/
}
int findIndex(int num, int* sort, int size){
	int i;
	for(i=0; i<size; i++){
		if(num == sort[i]) return i;
	}
	return -1;
}

void swap(int*a, int*b){
	int t;
	t=*a; *a=*b; *b=t;
}