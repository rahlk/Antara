#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, t;
	char *lydiaPath; // need string length of 2n-2 
	char *myPath;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n); // 2 <= n <= 50000
		lydiaPath = malloc(sizeof(char)*(2*n-1));
		myPath = malloc(sizeof(char)*(2*n-1));
		scanf("%s", lydiaPath);
		for (int j = 0; j < (2*n-2); j++) {
			if (lydiaPath[j] == 'S')
				myPath[j] = 'E';
			else
				myPath[j] = 'S';
		}
		myPath[2*n-2] = '\0';
		printf("Case #%d: %s\n", i+1, myPath);
		free(myPath);
		free(lydiaPath);
	}
	return 0;
}
