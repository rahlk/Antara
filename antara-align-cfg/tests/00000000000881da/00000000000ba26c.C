#include <stdio.h>
#include <stdlib.h>
#define N 50000

int main(){
	int num, dim,j;
	scanf("%d\n",&num);
	char *old = malloc(sizeof(char) * (2*N - 1));
	for(int i = 0; i < num; i++){
		j = 0;
		printf("Case #%d: ", i+1);
		scanf("%d\n", &dim);
		scanf("%s", old);
		while(old[j] != '\0'){
			if(old[j] == 'S')
				printf("E");
			else
				printf("S");
			j++;
		}
		printf("\n");
	}

	return 0;
}