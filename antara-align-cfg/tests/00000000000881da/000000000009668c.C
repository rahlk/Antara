#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long int ll;
int main(){
	int test;
	ll N;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%lld",&N);
		char *path=(char*)malloc((2*N-2)*sizeof(char));
		scanf("%s",path);
		printf("case #%d: ",i);
		int length=strlen(path);
		for(int i=0;i<strlen(path);i++){
			if(*(path+i)=='E')
				*(path+i)='S';
			else
				*(path+i)='E';
		}
		printf("%s\n",path);
	}
	return 0;
}