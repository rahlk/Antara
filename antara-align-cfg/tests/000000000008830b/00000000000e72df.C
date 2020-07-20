#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 110
#define ALPHABET_SIZE 26


int main() {
	int t, n, l;
	int* crypt;
	int* primes;
	int prime1, prime2;
	int* orderedPrimes;
	int i, j, k, index, isRepeat;
	int aux;

	crypt = malloc(MAX_SIZE * sizeof(int));
	primes = malloc(MAX_SIZE * sizeof(int));
	orderedPrimes = malloc(ALPHABET_SIZE * sizeof(int));

	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		scanf("%d", &l);
		for (j = 0; j < l; j++) {

			scanf("%d", &crypt[j]);
			if (j == 0) {
				for (k = 2; k <= n*n; k++) {
					if (crypt[0] % k == 0) {
						prime1 = k;
						break;
					}
				}
				prime2 = crypt[0] / prime1;
			}
			else if (j == 1) {
				if (crypt[1] % prime1 == 0) {
					primes[0] = prime2;
					primes[1] = prime1;
					prime2 = crypt[1] / prime1;
				}
				else {
					primes[0] = prime1;
					primes[1] = prime2;
					prime1 = crypt[1] / prime2;
				}
			}
			else {
				if (crypt[j] % prime1 == 0) {
					primes[j] = prime1;
					prime2 = crypt[j] / prime1;
				}
				else {
					primes[j] = prime2;
					prime1 = crypt[j] / prime2;
				}
			}
		}
		primes[j] = crypt[j - 1] / primes[j - 1];

		index = 1;
		orderedPrimes[0] = primes[0];

		for (j = 0; j < l + 1; j++) {
			if (index == 26) { break; }
			isRepeat = 0;
			for (k = 0; k < index; k++) {
				if (orderedPrimes[k] == primes[j]) {
					isRepeat = 1;
					break;
				}
			}
			if (!isRepeat) {
				orderedPrimes[index] = primes[j];
				index++;
			}
		}

		for (j = 0; j < ALPHABET_SIZE - 1; j++) {
			for (k = 0; k < ALPHABET_SIZE - 1 - j; k++) {
				if (orderedPrimes[k] > orderedPrimes[k + 1]) {
					aux = orderedPrimes[k];
					orderedPrimes[k] = orderedPrimes[k + 1];
					orderedPrimes[k + 1] = aux;
				}
			}
		}

		printf("Case #%d: ", i+1);

		for (j = 0; j < l + 1; j++) {
			for (k = 0; k < ALPHABET_SIZE; k++) {
				if (primes[j] == orderedPrimes[k]) {
					printf("%c", 65 + k);
					break;
				}
			}
		}
    printf("\n");


	}

  free(crypt);
  free(primes);
  free(orderedPrimes);

	return 0;
}
