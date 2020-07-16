#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N=0;
int checks=0;



int main() {
	char s[100000];

   
	int indice = 1;
  
    scanf("%d", &checks);
	//printf("nb checks : %d", checks);
	scanf("%d", &N);
	//printf("nb checks : %d", checks);

	while (scanf("%s", s) != EOF) {
		//printf("J'ai scanne : %s de taille %d\n", s, strlen(s));
		
		for(unsigned int i=0; i<strlen(s); i++){
			//printf("je lis et je range %c \n", s[i]);
			if(s[i]=='E')
				s[i]='S';
			else
				s[i]='E';
		}
		scanf("%d", &N);
		printf("Case #%d: %s\n", indice, s);
		indice++;
	}

	


	return 0;
}