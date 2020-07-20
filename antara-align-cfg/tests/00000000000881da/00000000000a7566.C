#include <stdio.h>

int main() {
	// your code goes here
	int tests;
	int t, n, c;
	
	
	scanf("%d", &tests);
	for (t=1; t<=tests; ++t) {
		scanf("%d", &n);
		
		char path[2*n-1];
		char ans[2*n-1];
		
		scanf("%s", path);
		
		for (c=0; c<2*n-1; ++c) {
			if (path[c] == 'E') {
				ans[c] = 'S';
			} else if (path[c] == 'S') {
				ans[c] = 'E';
			} else {
				ans[c] = path[c];
			}
		}
		
		printf("Case #%d: %s\n", t, ans);
		
	}
	
	return 0;
}