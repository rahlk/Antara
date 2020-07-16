#include<stdio.h>




int
main(void){
	int T, A = 0, B = 0;
	scanf("%d", &T);
	int N[T];
	for (int i = 0; i < T; ++i){
		scanf("%d", &N[i]);
	}
	for (int i = 1; i <= T; ++i)
	{
		int mod = 10;
		int dec = N[i - 1] % mod;
		while(N/mod != 0){ 
			if (dec == 4){
				A += (dec - 1);
				B += 1 * mod;
			}
			else {
				A += dec;
			}
			N -= dec;
			mod *= 10;
		}
		if (B == 0){
		    if (A == 0){
		        A += 1;
		    }
		    else {
		        A -= 1;
		    }
			B += 1;
		}	
		printf("Case #%d: %d %d\n", i, A, B);
	}
}