#include<stdio.h>
#include<malloc.h>
int main() {
	char* a[100];
	int size[100];
	int i,j;
	int T, N;
	char tmp;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		size[i] = 2 * N - 2;
		a[i] = (char *)malloc(sizeof(char)*size[i]);
		for (j = 0; j < size[i]; j++) {
			scanf("%c", &tmp);
			if (tmp == 'E')
				a[i][j] = 'S';
			else if (tmp == 'S')
				a[i][j] = 'E';
			else
				j = j - 1;
		}
	}
	for (i = 0; i < T; i++) {
		printf("Case #%d: ", i + 1);
		for (j = 0; j < size[i]; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}