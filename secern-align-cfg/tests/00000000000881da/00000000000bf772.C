#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	int abcd, i, len, j;
	char a;

		scanf("%d", &abcd);
		for (i = 0; i<abcd; i++){
			
			scanf("%d", &len);
			scanf("%c", &a);
			printf("Case #%d: ", i+1);			
			
			for ( j = 0; j < 2*len-2; j++ ){
				scanf("%c", &a);
				if(a== 'E'){
					printf("S");
				}else{
					printf("E");
				}
			}
			printf("\n");
		}
	return 0;
}