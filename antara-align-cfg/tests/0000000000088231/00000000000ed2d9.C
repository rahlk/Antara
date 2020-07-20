#include<stdio.h>
#include<string.h>

char* tiraZeroEsquerda(char * string) {
	char * aux = string;
	for(int i=0; i<strlen(aux); i++) {
		if(*aux != '0') {
			break;
		}
		aux++;
	}
	return aux;
}
 
void montaAB(char * entrada, char * A, char * B) {
	int i;
	for(i=0; i<strlen(entrada); i++) {
		if(entrada[i] == '4') {
			A[i] = '2';
			B[i] = '2';
		} 
		else {
			A[i] = entrada[i];
			B[i] = '0';
		}
	}
	A[i] = '\0';
	B[i] = '\0';
}

int main() {
	int t;
	char entrada[101+1], A[101+1], B[101+1];
	char *pA, *pB;
	scanf("%d",&t);
	
	for(int i=1; i<=t; i++) {
		scanf("%s", entrada);
		montaAB(entrada, A, B);
		
		pA = tiraZeroEsquerda(A);
		pB = tiraZeroEsquerda(B);
		
		printf("Case #%d: %s %s\n", i, A, B);
	}
	return 0;
	
}
