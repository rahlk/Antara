#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	long long N;
	long long A;
	long long B;
	int n;
	scanf(" %d", &n);
	for (int i = 0; i < n; ++i) {
		A = 0;
		B = 0;
		scanf(" %lld", &N);
		int curr_digit;
		int radix = 1;
		long long temp = N;
		while(temp != 0){
			curr_digit = temp % 10;
			if(curr_digit == 4){
				//Deal with it 
				A += radix;
			}
			temp /= 10;
			radix *= 10;
		}
		B = N - A;
		printf("Case #%d: %lld %lld\n", i+1, A, B);
	}
	return 0;
}