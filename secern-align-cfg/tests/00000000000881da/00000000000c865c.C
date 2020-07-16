#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t;
	int len;
	scanf("%d", &t);
	char *arr;

	for (int i = 1; i <= t; i++) {
		printf("Case #%d: ", i);
		fflush(stdout);
		scanf("%d", &len);
		arr = (char*)malloc(len * sizeof(int));
		scanf("%s", arr);

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'E')
				printf("S");
			else if (arr[j] == 'S')
				printf("E");
			fflush(stdout);
		}

		free(arr);
		printf("\n");
	}

	return 0;
}