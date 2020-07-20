#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int T;
	scanf("%d", &T);
	srand(time(NULL));
	int i = 1;
	while (T--) {
		int n = 0;
		scanf("%d", &n);
		
		while(int a = 1; a < n/2; a++){
		    printf("Case #%d: %d %d\n", i, a, n-a);
		}
	}
	return 0;
}