#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int * tenpowerarr(long n){
	int * rez = malloc(sizeof(int) * 10);


	int itr = 0;

	while(n>0){
		rez[itr] = n%10;
		itr++;
		n /= 10;
	}

	return rez;
}


long findCifra(long n){
	int * tab = tenpowerarr(n);

	long rez = 0;
	long pwrten = 1;
	for(int i = 0; i<10; i++){
		if(tab[i] == 4){
			rez += pwrten;
		}
		pwrten *= 10;
	}


	return rez;


}





int main(){
	int n;

	scanf("%d", &n);



	for(int i = 1; i<= n; i++){
		
		long cs;
		scanf("%ld", &cs);
		long cd = findCifra(cs);
		cs -= cd;

		printf("Case #%d: %ld %ld \n", i, cs, cd);




	}



	return 0;
}
