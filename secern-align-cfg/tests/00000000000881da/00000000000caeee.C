#include <stdio.h>

int main(){
	int casos, n;
	scanf("%d", &casos);
	for (int i = 1; i < casos + 1; i++){
		scanf("%d", &n);
		char P[2*n-2];
		fflush(stdin);
		scanf("%s", P);
		
		for (int j = 0; j < 2*n-2; j++) P[j] = (P[j] == '\0' ? '\0' : (P[j] == 'E' ? 'S' : 'E'));
		
		printf("Case #%d: ", i);
		for (int k = 0; P[k] != '\0'; k++) printf("%c", P[k]);
		printf("\n");
	}
}
