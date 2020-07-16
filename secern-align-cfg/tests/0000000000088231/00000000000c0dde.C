#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N=0;
int SIZE = 101;

void initTab(int leTab[SIZE]){
	for(int i=0; i<SIZE; i++){
		leTab[i]=0;
	}
	return;
}

long int updateMultiplieur(unsigned int size){
	long int multi=1;
	
	for(unsigned int i=1; i<size; i++){
		multi = multi*10;
	}
	return multi;
}

int main() {
	char s[102];
	int lesQuatre[101];
	initTab(lesQuatre);
	long int nbr1=0, nbr2=0;
	long int multiplieur = 1;
   
    scanf("%d", &N);
	//printf("Nombre de tests : %d\n", N);
    int indice = 1;
	while (scanf("%s", s) != EOF) {
		//printf("J'ai scanne : %s de taille %d\n", s, strlen(s));
		multiplieur = updateMultiplieur(strlen(s)); 
		//printf("\nmultiplieur : %ld", multiplieur);
		//printf("atoi : %ld\n", atol(s)); 
		nbr1 = atol(s);
		
		for(unsigned int i=0; i<strlen(s); i++){
			//printf("\nje lis et je fais rien %c\n", s[i]);
			if (s[i]=='4'){lesQuatre[i] = 1; nbr2 += multiplieur; 
			//printf("\nnbr2 : %ld\nnbr1 : %ld", nbr2, nbr1); 
			}
			multiplieur = multiplieur /10;
		}
		
		//nbr1 = atoi(s);
		nbr1 = nbr1 - nbr2;
		
		
		
		
		printf("Case #%d: %ld %ld\n", indice, nbr1, nbr2);
		indice++;
		multiplieur = 1;
		initTab(lesQuatre);
		nbr2 = 0;
		nbr1=0;
	}

	return 0;
}