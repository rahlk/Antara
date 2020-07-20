#include <stdio.h>
#include <stdlib.h>

int desmonta (int num, int pos){
	
	if (num < 10){
		if (num!= 4)
			return -1;
		else
			return 0;
	}
	
	int aux;
	aux = num/pos;
	
	if (aux == 4)
		return pos;
	else 
		return desmonta(num%pos, pos/10);
}

void troca(int *A, int *B, int pos){
	int aux;
  if (pos != 0)
    aux = 4*pos - 1;
  else 
    aux = 1;

	*A -= aux;
	*B += aux;
}

int main(){
	int testes, pos = 1000000000;
	int A, B, verificaA, verificaB;
  int i;
	
	scanf ("%d", &testes);
	
	for (i=1; i<=testes; i++){
		verificaA = 0;
		verificaB = 0;
		B = 0;
		scanf ("%d", &A);

		while ( verificaA != -1 && verificaB != -1){
			verificaA = desmonta (A, pos);
			if (verificaA != -1){
				troca (&A, &B, verificaA);
			}
			verificaB = desmonta (A, pos);
			if (verificaB != -1){
				troca (&B, &A, verificaB);
			}
		}
		
		printf ("Caso %d: %d %d\n", i, A, B);
	}

  return 0;
}