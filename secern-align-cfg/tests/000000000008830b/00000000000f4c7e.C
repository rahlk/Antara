#include "stdio.h"
#include "stdint.h"

uint64_t ciphertext[1024];
uint64_t primes[1024];

uint64_t gcd(uint64_t a, uint64_t b) {
	while(a) {
		if(a > b) {
			uint64_t t = a;
			a = b;
			b = t;
		}
		else {
			b = b%a;
		}
	}
	return b;
}

uint64_t charset[26];
char plaintext[1024];

void decode(int l) {

	uint64_t p = 1;
	int pi;
	for(pi = 0; pi < l-1 && p == 1; ++pi) {
		if(ciphertext[pi] == ciphertext[pi+1]) {
			continue;
		}
		p = gcd(ciphertext[pi], ciphertext[pi+1]);
	}

	primes[pi] = p;

	for(int i = pi-1; i >= 0; --i) {
		primes[i] = ciphertext[i] / primes[i+1];
	}
	for(int i = pi; i < l; ++i) {
		primes[i+1] = ciphertext[i] / primes[i];
	}

	//sort and distinct
	uint64_t m = 0;
	for(int i = 0; i < 26; ++i) {
		uint64_t best = 1ULL << 30;
		for(int j = 0; j < l+1; ++j) {
			uint64_t pj = primes[j];
			if(pj > m && pj < best) {
				best = pj;
			}
		}
		charset[i] = m = best;
	}

	//map to chars
	for(int i = 0; i < l+1; ++i) {
		plaintext[i] = '_';
		for(int j = 0; j < 26; ++j) {
			if(charset[j] == primes[i]) {
				plaintext[i] = 'A' + j;
			}
		}
	}
	plaintext[l+1] = 0;

	printf("%s\n", plaintext);
}
int main(int argc, char** argv) {
	int tests;
	scanf("%d\n", &tests);
	for(int test = 0; test < tests; ++test) {
		int N,L;
		scanf("%d %d\n", &N, &L);

		for(int i = 0; i < L; ++i) {
			scanf(" %lld", &ciphertext[i]);
		}
		printf("Case #%d: ", test+1);

		decode(L);
	}
}