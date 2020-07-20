/*
 * Filename    : C.c
 * Author      :
 * Description :
 *
 * Date        : Apr  7 2018 21:36:31
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_N 10000
#define MAX_L 100
#define NUM_LETTER 26

static uint32_t find_primes(uint32_t product, uint32_t lim)
{
	static unsigned int primes[MAX_N];
	static unsigned int primes_idx;

	if ((product % 2) == 0)
		return 2;
	else
		primes[primes_idx++] = 2;

	for (int i = 3; i < lim; i += 2) {
		int found = 0;
		for (int j = 0; j < primes_idx; j++) {
			if ((i % primes[j]) == 0) {
				found = 1;
				break;
			}
		}
		if (!found) {
			primes[primes_idx++] = i;
			if ((product % i) == 0)
				return i;
		}
	}
	return 1;
}

static int find_index(uint32_t *ref, uint32_t val)
{
	int j = 0;
	for ( ; j < NUM_LETTER && ref[j]; j++) {
		if (ref[j] == val)
			return j;
	}

	return j;
}

static inline void swap(uint32_t *a, uint32_t idx1, uint32_t idx2)
{
	uint32_t tmp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = tmp;
}

static void insert_letter(uint32_t *letter, uint32_t val)
{
	int i = find_index(letter, val);

	if (letter[i] == val)
		return;

	letter[i] = val;

	for (int j = i; j > 0; j--) {
		if (letter[j] >= letter[j-1])
			return;
		swap(letter, j-1, j);
	}
}

static void decipher(char *dst, uint32_t *src, uint32_t len, uint32_t *ref)
{
	for (int i = 0; i < len; i++) {
		int index = find_index(ref, src[i]);
		dst[i] = index + 'A';
	}
}

int main(int argc, char *argv[])
{
	uint32_t T, N, L;
	uint32_t i;
	uint32_t ciphertext[MAX_L];
	uint32_t letter[NUM_LETTER];
	uint32_t prime_list[MAX_L + 1];
	char plaintext[MAX_L + 1];

	scanf("%u\n", &T);

	for (i = 0; i < T; i++) {
		printf("Case #%u: ", i + 1);

		memset(letter, 0, sizeof(letter));
		memset(ciphertext, 0, sizeof(ciphertext));
		memset(prime_list, 0, sizeof(prime_list));
		memset(plaintext, 0, sizeof(plaintext));

		scanf("%u %u\n", &N, &L);
		/*printf("N:%u L:%u\n", N, L);*/

		//TODO: Need different approach for that case
		if (N > MAX_N) {
			printf("\n");
			continue;
		}

		for (int j = 0; j < L; j++) {
			scanf("%u\n", &ciphertext[j]);

			if (j == 0) {
				prime_list[j] = find_primes(ciphertext[j], N);
				insert_letter(letter, prime_list[j]);
			}

			if (j == 1 && (ciphertext[j] % prime_list[j]) != 0)
				swap(prime_list, 0, 1);

			prime_list[j+1] = ciphertext[j] / prime_list[j];
			insert_letter(letter, prime_list[j+1]);
		}

		decipher(plaintext, prime_list, L + 1, letter);
		printf("%s\n", plaintext);
	}

	return 0;
}

/* end of C.c  */
