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
	char letter;

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
				for (k = 2; k <= n; k++) {
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

		printf("Case #%d: ", i + 1);

		for (j = 0; j < l + 1; j++) {
			for (k = 0; k < ALPHABET_SIZE; k++) {
				if (primes[j] == orderedPrimes[k]) {
					switch (k)
					{
					case 0:
						letter = 'A';
						break;
					case 1:
						letter = 'B';
						break;
					case 2:
						letter = 'C';
						break;
					case 3:
						letter = 'D';
						break;
					case 4:
						letter = 'E';
						break;
					case 5:
						letter = 'F';
						break;
					case 6:
						letter = 'G';
						break;
					case 7:
						letter = 'H';
						break;
					case 8:
						letter = 'I';
						break;
					case 9:
						letter = 'J';
						break;
					case 10:
						letter = 'K';
						break;
					case 11:
						letter = 'L';
						break;
					case 12:
						letter = 'M';
						break;
					case 13:
						letter = 'N';
						break;
					case 14:
						letter = 'O';
						break;
					case 15:
						letter = 'P';
						break;
					case 16:
						letter = 'Q';
						break;
					case 17:
						letter = 'R';
						break;
					case 18:
						letter = 'S';
						break;
					case 19:
						letter = 'T';
						break;
					case 20:
						letter = 'U';
						break;
					case 21:
						letter = 'V';
						break;
					case 22:
						letter = 'W';
						break;
					case 23:
						letter = 'X';
						break;
					case 24:
						letter = 'Y';
						break;
					case 25:
						letter = 'Z';
						break;
					}
					printf("%c", letter);
					break;
				}
			}
		}
		printf("\n");


	}

	return 0;
}
