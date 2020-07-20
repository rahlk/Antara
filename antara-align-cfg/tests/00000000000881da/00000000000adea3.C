#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<= n; i++){
		int par;
		scanf("%d", &par);
		printf("Case #%d: ", i);
		for(int j = 0; j<=(2*par -2); j++){
			char c;
			scanf("%c", &c);
			if(c == 'E')
				printf("S");
			if(c == 'S')
				printf("E");
		}
		printf("\n");
	}
	return 0;
}
