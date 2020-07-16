#include <stdio.h>
#include <math.h>

int main() {
	int n,s;
	scanf("%d", &s);
	for(int i=0;i<s;i++) {
		scanf("%d", &n);
		int a = n;
		int k = n;
		int b = 0;
		int c;
		for(c=0; k>=1; c++) {
			if(k%10 == 4) {
				b = pow(10,c)+b;
				a = a-pow(10,c);
			}
			k = k/10;
		}
		printf("Case #%d: %d %d\n", i+1, a, b);
	}
	return 0;
}
