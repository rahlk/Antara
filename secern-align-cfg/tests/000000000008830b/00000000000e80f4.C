#include <stdio.h>
#include <stdlib.h>

int main() {
  int Testcases, i, k, Nmax, Lsize, min, posmin, letter, lastmin;
  long int *Product, *Factor;
  char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K' ,
  		'L' ,'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  char *Ciphered;
  
  scanf("%d", &Testcases);
  for (i=0; i<Testcases; i++) {
      scanf("%d %d", &Nmax, &Lsize);
      Product = malloc(Lsize * sizeof(long int));
      Factor = malloc((Lsize + 1) * sizeof(long int));
      Ciphered = malloc((Lsize + 1) * sizeof(char));
      for (k=0; k<Lsize; k++) {
          scanf("%lli", &Product[k]);
      }
      
      Factor[0] = 3;
      while((Product[0] % Factor[0]) != 0 ) {   //find the first two factors
          Factor[0] += 2;                  
      }
      k = Product[0] / Factor[0];
      if (Factor[0] > k) {
          Factor[1] = Factor[0];
          Factor[0] = k;
      }
      else {
      	Factor[1] = k;
	  }
      for (k=2; k<(Lsize + 1); k++) {
          Factor[k] = Product[k-1] / Factor[k-1];	//find the rest of the factors
      }	
            
      printf("Case #%d: ", (i+1));
      
      lastmin = 0;
      for (letter=0; letter<26; letter++) {
      	min = Nmax;
      	for (k=0; k<(Lsize + 1); k++) {
      		if ((Factor[k] < min) && (Factor[k] > lastmin)) {
      			min = Factor[k];
      			posmin = k;
			  }
	  	}
	  	for (k=0; k<(Lsize + 1); k++) {
      		if (Factor[k] == min) {
      			Ciphered[k] = alphabet[letter];	//assign each letter to the correct factors
			  }
	  	}
	  	lastmin = min;
	   }
	   
	  for (k=0; k<(Lsize + 1); k++) {
         printf("%c", Ciphered[k]);	//print solution
      }	
      printf("\n");
      free(Product);
      free(Factor);
      free(Ciphered);
  }
  return 0;
}