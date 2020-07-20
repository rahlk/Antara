#include <stdio.h>

int main() {
	int t, i, j;
	char a[10][1025];
	for (i = 0; i < 10; i++){
		for (j = 0; j < 1024; j++){
			if ( ((j) % (2*(i+1))) / (i+1) ){
				a[i][j] = '1';
			}
			else{
				a[i][j] = '0';
			}
		}
		a[i][j] = '\0';
	}
	scanf("%d", &t);
	while (t--){
		int n, b, f, k, flag, x;
		scanf("%d %d %d", &n, &b, &f);
		char r[10][n];
		for (i = 0; i < f; i++){
			printf("%.*s\n", n, a[i]);
			fflush(stdout);
			scanf(" %s", r[i]);
		}
		x = 0;
		for (k = 0; k < n; k++){
			flag = 1;
			for (i=0;i<f;i++){
				if (r[i][k-x] != a[i][k]){
					flag = 0;
					break;
				}
			}
			if (!flag){
				printf("%d ", k);
				x++;
			}
		}
		printf("\n");
		fflush(stdout);
		scanf("%d", &flag);
	}
	return 0;
}