#include<stdio.h>
#include<string.h>
#include <math.h>

int B, C, D, E, G;
int Letra[30];
int Primo[30];

void mdc() {
  int I, J;
  
  if (B <= C) {
    J = B;
  } else {
    J = C;
  }
  for(I=1;I<=J;I++) {
  	if ((B % I == 0) && (C % I == 0)) {
  	  D = I;
	}
  }
}


void imprime(int G) {
  int I;
  for (I=1;I<=26;I++) {
    if (Primo[I] == G) {
      printf("%c", Letra[I]);
	}	
  }
}


int main() {
  int N;
  int I;
  int T;
  int L;
  int J;
  int Vet[20000];
  int F[20000];
  int H[20000];
  int Aux;
  int K;
  int Cont;
  
  Letra[1] = 'A';
  Letra[2] = 'B';
  Letra[3] = 'C';
  Letra[4] = 'D';
  Letra[5] = 'E';
  Letra[6] = 'F';
  Letra[7] = 'G';
  Letra[8] = 'H';
  Letra[9] = 'I';
  Letra[10] = 'J';
  Letra[11] = 'K';
  Letra[12] = 'L';
  Letra[13] = 'M';
  Letra[14] = 'N';
  Letra[15] = 'O';
  Letra[16] = 'P';
  Letra[17] = 'Q';
  Letra[18] = 'R';
  Letra[19] = 'S';
  Letra[20] = 'T';
  Letra[21] = 'U';
  Letra[22] = 'V';
  Letra[23] = 'W';
  Letra[24] = 'X';
  Letra[25] = 'Y';
  Letra[26] = 'Z';

  scanf("%d", &N);
  for(I=1;I<=N;I++) {
    scanf("%d", &T);
    scanf("%d", &L);
    for(J=1;J<=L;J++) {
      scanf("%d", &Vet[J]);
	}
	B = Vet[1];
	C = Vet[2];
	mdc();
	E = B / D;
	if (Vet[2] % E == 0) {
	} else {
	  if (Vet[2] % D == 0) {
	  	G = E;
	  	E = D;
	  	D = G;
	  }
	}
	F[1] = D;
	F[2] = E;
	
    for(J=2;J<=L;J++) {
      F[J+1] = Vet[J] / F[J];
	}	

    for(J=1;J<=L+1;J++) {
      H[J] = F[J];
	}
	
	for(J=1;J<=L;J++) {
	  for(K=J+1;K<=L+1;K++) {
	    if (H[J] > H[K]) {
	      Aux = H[J];
	      H[J] = H[K];
	      H[K] = Aux;
		}
	  }
	}
	
	Cont = 0;
	for(J=1;J<=L+1;J++) {
	  if (J == 1) {
	  	Cont = Cont + 1;
	    Primo[Cont] = H[J];
	  } else {
	  	if (H[J-1] == H[J]) {
	  		
		} else {
		  Cont = Cont + 1;
	      Primo[Cont] = H[J];
		}
	  }
	}
	
	printf("Case #%d: ", I);
	
    for(J=1;J<=L+1;J++) {
	  imprime(F[J]);
    }

    printf("\n");	
  }
  return(0);
}
