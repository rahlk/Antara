#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int T, k, A, i, j, r, p, s, aux = 1, fin;
	char **c;
	scanf("%d", &T);
	for(k = 0; k < T; ++k){
		scanf("%d", &A);
		c = (char **)calloc((A+1), sizeof(char *));
		if(c == NULL) exit(1);
		for(i = 0; i <= A; ++i){
			c[i] = (char *)calloc(501, sizeof(char));
			if(c[i] == NULL) exit(1);			
		}
		for(i = 0; i < A; ++i){
			scanf("%s", c[i]);			
		}	
		printf("Case #%d: ", k+1);
		for(j = 0; j < 500; ++j){
			r = p = s = 0;
			fin = 0;
			for(i = 0; i < A; ++i){
				if(c[i][j] == 'R') ++r;
				else if(c[i][j] == 'P') ++p;
				else if(c[i][j] == 'S') ++s;
				else ++fin;
			}
			if (fin == A) break;
			if(r == 0) c[A][j] = 'R';
			else if (p == 0) c[A][j] = 'P';
			else if (s == 0) c[A][j] = 'S';
			else {
				aux = 0;
				printf("IMPOSSIBLE\n");
				break;	
			}	
		}
		if(aux) for(i = 0; i < j; ++i) printf("%c", c[A][i]);
		printf("\n");
		aux = 1;
		for(i = 0; i <= A; ++i) free(c[i]);
		free(c);
	}
	return 0;
}
