#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, N;
	scanf("%d", &T);

	for(int i=1; i<=T; ++i){
		int A = 0, B = 0, digit = 0, base = 1;
		scanf("%d", &N);
		while(1){
			digit = N % 10;
			if(digit == 4){
				A += 2 * base; 
				B += 2 * base;  
			} else {
				A += digit * base;
			}
			base *= 10;
			N /= 10;
			if(N == 0) break;
		}
		
		printf("Case #%d: %d %d\n", i, A, B);
	}
	
	return 0;
}
