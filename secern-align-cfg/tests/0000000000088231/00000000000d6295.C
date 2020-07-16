#include <stdio.h>
#include <stdlib.h>

int desmonta (long num, long pos){
	
	if (num < 10){
		if (num!= 4)
			return -1;
		else
			return 0;
	}
	
	long aux;
	aux = num/pos;
	
	if (aux == 4)
		return pos;
	else 
		return desmonta(num%pos, pos/10);
}

void troca(long *A, long *B, long pos){
	long aux;
  if (pos != 0)
    aux = 4*pos - 1;
  else 
    aux = 1;

	*A -= aux;
	*B += aux;
}

int main(){
	int n;
  long pos = 10000000000;
	long A, B, vA, vB;
  int i;
	
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++){
		vA = 0;
		vB = 0;
		B = 0;
		scanf ("%li", &A);

		while ( vA != -1 && vB != -1){
			vA = desmonta (A, pos);
			if (vA != -1){
				troca (&A, &B, vA);
			}
			vB = desmonta (A, pos);
			if (vB != -1){
				troca (&B, &A, vB);
			}
		}
		
		printf ("Caso %d: %li %li\n", i, A, B);
	}

  return 0;
}