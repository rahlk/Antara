#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int T, i, n, a, b, ten;
	scanf("%d", &T);
	for (i = 0; i < T; ++i){
		a = 0;
		ten = 1;
		scanf("%d", &n);
		b = n;
		do{
			if(n%10 == 4){
				a += ten;
			}
			n/=10;
			ten*=10;
		}while(n > 0);
		b-=a;
		printf("Case #%d: %d %d\n", i+1, a, b);
	}
	return 0;
}
