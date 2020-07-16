#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int T, i, n, j;
	char *p;
	scanf("%d", &T);
	for (i = 0; i < T; ++i){
		scanf("%d", &n);
		p = (char *)malloc((2*n-1)*sizeof(char));
		if(p==NULL) exit(1);
		scanf("%s", p);
		printf("Case #%d: ", i+1);
		for(j = 0; j < 2*n-2; j++){
			if(p[j] == 'S') printf("E");
			else if(p[j] == 'E') printf("S");
		}
		printf("\n");
		free(p);
	}
	return 0;
}
