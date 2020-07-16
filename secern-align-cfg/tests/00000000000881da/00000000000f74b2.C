#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int N=0;
int test=0;

int main() {
	char chemin[100000];
	int numtest = 1;
  
    scanf("%d", &test);
	scanf("%d", &N);

	for(int j=0; j<test ;j++){
	
		for(unsigned int i=0; i<strlen(chemin); i++){
			if(chemin[i]=='S')
				chemin[i]='E';
			else
				chemin[i]='S';
		}
		scanf("%d", &N);
		printf("Case #%d: %s\n", numtest, chemin);
		numtest++;
	}

	return 0;
}