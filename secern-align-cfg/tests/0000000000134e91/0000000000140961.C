#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char fun(char **m, int p, int n);

int main (void){
	int T, F, k, i;
	char **m, aux;
	scanf("%d %d", &T, &F);
	for(k = 0; k < T; ++k){
		m = (char **)calloc(120, sizeof(char *));
		if(m == NULL) exit(1);
		for(i = 0; i < 120; ++i){
			m[i] = (char *)calloc(5, sizeof(char));
			if(m[i] == NULL) exit(1);			
		}
		m[119][0] = fun(m, 0, 23);
		m[119][1] = fun(m, 1, 5);
		m[119][2] = fun(m, 2, 1);
		m[119][4] = fun(m, 3, 1);
		m[119][3] = m[119][0] + m[119][1] + m[119][2] + m[119][4] - 335;
		for(i = 0; i < 5; ++i){
			printf("%c", m[119][i]);
		}
		scanf("%c", &aux);
		for(i = 0; i < 120; ++i) free(m[i]);
		free(m);
		if(aux == 'N'){
			break;
		}
	}
	return 0;
}

char fun(char **m, int p, int n){
	int i, a = 0, b = 0, c = 0, d = 0, e = 0; 
	char G = 335+p*(65+66+67+68+69);
	for(i = 0; i < 119; ++i){
		if(p == 0 || (p && m[119][p-1] == m[i][p-1])){
		
			printf("%d", i*5+p+1);
			scanf(" %c", &m[i][p]);
			G -= m[i][p];
		/*	if(m[i][p] == 'A') ++a;
			else if(m[i][p] == 'B') ++b;
			else if(m[i][p] == 'C') ++c;
			else if(m[i][p] == 'D') ++d;
	 		else if(m[i][p] == 'E') ++e;*/
	}
}
	printf("%c", G);
	return G;
/*	if(a == n) return 'A';
	else if(b == n) return 'B';
	else if(c == n) return 'C';
	else if(d == n) return 'D';
	else if(e == n) return 'E';*/
}
