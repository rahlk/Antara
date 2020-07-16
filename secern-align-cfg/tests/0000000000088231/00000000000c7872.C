#include <stdio.h>

int main(){
	int casos, n, a, b, multiplicador, casosmax;
	scanf("%d", &casosmax);
	casos = casosmax;
	while (casos > 0){
		a = 0;
		b = 0;
		multiplicador = 1;
		scanf("%d", &n);
		while (multiplicador*10 <= n){
			if ((n % (multiplicador*10))/(multiplicador) == 4){
				b += (multiplicador);
			}
			multiplicador *= 10;
		}
		if ((n/(multiplicador)) == 4){
			b += (multiplicador);
		}
		a = n - b;
		printf("Case #%d: %d %d\n", casosmax-casos+1, a, b);
		casos--;
	}
}
