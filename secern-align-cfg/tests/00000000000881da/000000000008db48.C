#include<stdio.h>

char N[50001];

int main(){
	int T;
	scanf("%d",&T);
	int i;
	for(i=0;i<T;i++ ){
		int M;
		scanf("%d",&M);
		scanf("%s",N);
		int j=0;
		printf("Case #%d: ",i+1);
		while (N[j]!='\0'){
			if (N[j]=='E'){
				printf("S");
			}
			else if (N[j]=='S'){
				printf("E");
			}
			j++;
		}
		printf("\n");
	}
	return 0;
}
