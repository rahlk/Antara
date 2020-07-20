#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//GENERAL
int T, t, N, L, l, i, c;
int P[100], menor, lmenor, S[101], tope;
int a, b;
char sal[102];
int cod[26];

int main(int argc, char** argv) {
	scanf("%d", &T);

	//casos
	for (t = 1; t <= T; t++) {
		//leo cada caso ****
		scanf("%d", &N);
		scanf("%d", &L);
		menor = N;
		//leo el texto encrip y cojo el menor producto y donde está
		for (l = 0; l < L; l++) {
			scanf("%d", &P[l]);
			if (P[l] < menor) {
				menor = P[l];
				lmenor = l;
			}
		}
		//resuelvo
		//printf("el menor es %d\n", menor);
		//calculo los primos del menor número
		if (menor % 2 == 0) {
			a = 2;
			b = menor / a;
		} else {
			for (i = 3; i <= menor / 2; i=i+2) {
				if (menor % i == 0) {
					a = i;
					b = menor / a;
					break;
				}
			}
		}
		//printf("a=%d  b=%d\n", a, b);
		//217 1891 4819 2291 2987 3811 1739 2491 4717 445 65 1079 8383 5353 901 187 643 1003 697 3239 7663 291 123 779 1007 3551 1917 2117 1679 989 3053


		//desde ese, voy calculando el resto
		//no se si es a o b el primo de lmenor. miro el siguiente (o el anterior si estoy al final)
		if (lmenor < L - 1) {
			//no estoy al final. estudio el siguiente
			if (P[lmenor + 1] % a == 0) {
				//el de lmenor es el b
				S[lmenor] = b;
				S[lmenor + 1] = a;
			} else {
				//el de lmenor es el a
				S[lmenor] = a;
				S[lmenor + 1] = b;
			}
			//printf("S[%d] es %d y S[%d] es %d\n", lmenor,S[lmenor],lmenor+1,S[lmenor+1]);
			//para delante
			for (l = lmenor + 2; l < L; l++) {
				S[l] = P[l - 1] / S[l - 1];
				//printf("%d -> S[%d] es %d\n", P[l],l,S[l]);
			}
			//el ultimo caracter
			S[L] = P[L - 1] / S[L - 1];
			//para atras
			for (l = lmenor - 1; l >= 0; l--) {
				S[l] = P[l] / S[l + 1];
			}
		} else {
			//estaba al final. Estudio el anterior
			if (P[lmenor - 1] % a == 0) {
				//el de lmenor es el a
				S[lmenor] = a;
				S[L] = b;
			} else {
				//el de lmenor es el b
				S[lmenor] = b;
				S[L] = a;
			}
			//para atras
			for (l = lmenor - 1; l >= 0; l--) {
				S[l] = P[l] / S[l + 1];
			}
		}
		for (i = 0; i <= L; i++) {
			//printf("%d ", S[i]);
		}
		//printf("\n");

		//ahora obtengo letras de los primos
		tope = 0;
		for (c = 0; c < 26; c++) {
			menor = N;
			for (i = 0; i <= L; i++) {
				if (S[i] < menor && S[i] > tope)
					menor = S[i];
			}
			cod[c] = menor;
			//printf("la %c es %d\n", 'A' + c, menor);
			tope = menor;
			//creo la cadena con ese codigo
			for (i = 0; i <= L; i++) {
				if (S[i] == cod[c]) {
					sal[i] = 'A' + c;
				}
			}
		}
		sal[L + 1] = 0;

		printf("Case #%d: %s\n", t, sal);
	} //siguiente caso

	return (EXIT_SUCCESS);

}