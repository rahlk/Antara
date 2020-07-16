#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void secondline(char *inputstring, char **outputstring);
int main(void) {
	int T, N, i;
	scanf("%d", &T);
	char **result = (char**)malloc(sizeof(char*)*T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		char *inputstring = (char*)malloc(sizeof(char)*(N + 1));
		scanf("%s", inputstring);
		result[i] = (char*)malloc(sizeof(char)*(N + 1));
		secondline(inputstring, &result[i]);
	}
	for (i = 0; i < T; i++) {
		printf("Case #%d: %s\n", i + 1, result[i]);
		free(result[i]);
	}
	free(result);
	return 0;
}
void secondline(char *inputstring, char **outputstring) {
	int i;
	for (i = 0; i < strlen(inputstring); i++) {
		if (inputstring[i] == 'E') {
			(*outputstring)[i] = 'S';
		}
		else {
			(*outputstring)[i] = 'E';
		}
	}
	(*outputstring)[i] = '\0';
	return;
}