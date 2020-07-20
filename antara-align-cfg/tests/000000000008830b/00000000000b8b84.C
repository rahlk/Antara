#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char * solve(int max, int size){
	int * tab = malloc(sizeof(int) * size);

	for(int i = 0; i<size; i++){
		scanf("%d", &tab[i]);
	}

	int * primetab = malloc(sizeof(int) * size*2);

	int firstprime = 2;
	while(tab[0] % firstprime != 0) firstprime ++;

	primetab[0] = firstprime;
	primetab[1] = tab[0]/firstprime;
	int next = firstprime;
	if(tab[1]/next != 0) next = primetab[1];
	for(int i = 1; i<size; i++){
		primetab[i*2] = next;
		primetab[i*2 +1] = tab[i] / next;
		next = primetab[i*2 +1];
	}


	int * primetabb = malloc(sizeof(int) * 26);
	int itr = 0;
	for(int i = 0; i<size*2; i++){
		int isin = 0;
		for(int j = 0; j<itr; j++){
			if(primetabb[j] == primetab[i]) isin = 1;
		}
		if(!isin){
			primetabb[itr] = primetab[i];
			itr++;
		}
	}

	for(int i = 0; i<26; i++){
		for(int j = 0; j<26-i; j++){
			if(primetabb[j+1] < primetabb[j]){
				int temp = primetabb[j+1];
				primetabb[j+1] = primetabb[j];
				primetabb[j] = temp;
			}

		}


	}

	



	char * rez = malloc(sizeof(char)*(size +1));



	int prvi = primetab[0];

	int place = 0;

	while (prvi != primetabb[place]) place++;

	rez[0] = 'A' + place;

	for(int i = 0; i<size; i++){
		place = 0;
		while(primetab[i*2 +1] != primetabb[place]) place ++;
		rez[i+1] = 'A' + place;




	}

	return rez;


}









int main(){
	int n;

	scanf("%d", &n);



	for(int i = 1; i<= n; i++){
		
		int max;
		scanf("%d", &max);
		int size;
		scanf("%d", &size);


		char * rez = solve(max, size);


	


		printf("Case #%d: ", i);

		for(int j = 0; j<=size; j++){
			printf("%c", rez[j]);
		}


		printf("\n");



	}



	return 0;
}
