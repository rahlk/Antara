#include <stdio.h>
#include <stdlib.h>

int main() {
	int NumCases = 0;
	scanf("%d", &NumCases);
	for (int Case = 1; Case <= NumCases; ++Case) {
		int N;
		scanf("%d", &N);
		char *Path = malloc(2 * N - 1);
		scanf("%s", Path);
		for (char *P = Path; *P; ++P) {
			if (*P == 'E') {
				*P = 'S';
			} else {
				*P = 'E';
			}
		}
		printf("Case #%d: %s\n", Case, Path);
		free(Path);
	}
}
