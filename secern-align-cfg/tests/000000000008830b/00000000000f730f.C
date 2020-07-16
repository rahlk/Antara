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

static unsigned int letter_idx;

static unsigned long find_primes(unsigned long product, unsigned long lim)
{
	unsigned long primes[MAX_N] = {0};
	unsigned int primes_idx = 0;

	if ((product % 2) == 0)
		return 2;
	else
		primes[primes_idx++] = 2;

	for (unsigned long i = 3; i < lim; i += 2) {
		int found = 0;
		for (unsigned int j = 0; j < primes_idx; j++) {
			if ((i % primes[j]) == 0) {
				found = 1;
				break;
			}
		}
		if (!found) {
			if ((product % i) == 0)
				return i;
			primes[primes_idx++] = i;
		}
	}
	return 1;
}

static unsigned int find_index(unsigned long *ref, unsigned long val)
{
	unsigned int start = 0;
	unsigned int end = letter_idx;
	unsigned int mid = end / 2;

	while (ref[mid] != val) {
		if (val > ref[mid])
			start = mid;
		else
			end = mid;
		mid = (start + end) / 2;
	}
	return mid;
}

static int is_exist(unsigned long *ref, unsigned long val)
{
	for (unsigned int j = 0; j < letter_idx; j++) {
		if (ref[j] == val)
			return 1;
	}

	return 0;
}

static inline void swap(unsigned long *a, unsigned int idx1, unsigned int idx2)
{
	unsigned long tmp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = tmp;
}

static void insert_letter(unsigned long *letter, unsigned long val)
{
	if (is_exist(letter, val))
		return;

	letter[letter_idx++] = val;

	for (unsigned int j = letter_idx - 1; j > 0; j--) {
		if (letter[j] > letter[j-1])
			return;
		swap(letter, j-1, j);
	}
}

static void decipher(char *dst, unsigned long *src, unsigned int len,
		unsigned long *ref)
{
	for (int i = 0; i < len; i++) {
		int index = find_index(ref, src[i]);
		dst[i] = index + 'A';
	}
}

int main(int argc, char *argv[])
{
	uint32_t T, L;
	unsigned long N;
	uint32_t i, j;
	unsigned long ciphertext[MAX_L];
	unsigned long letter[NUM_LETTER];
	unsigned long prime_list[MAX_L + 1];
	char plaintext[MAX_L + 1];

	scanf("%u\n", &T);

	for (i = 0; i < T; i++) {
		printf("Case #%u: ", i + 1);

		scanf("%lu %u\n", &N, &L);
		/*printf("N:%u L:%u\n", N, L);*/

		//TODO: Need different approach for that case
		if (N > (1 << 16)) {
			printf("\n");
			continue;
		}

		memset(letter, 0, sizeof(letter));
		memset(ciphertext, 0, sizeof(ciphertext));
		memset(prime_list, 0, sizeof(prime_list));
		memset(plaintext, 0, sizeof(plaintext));
		letter_idx = 0;

		for (j = 0; j < L; j++) {
			scanf("%lu\n", &ciphertext[j]);
			/*printf("L[%d]:%d\n", j, ciphertext[j]);*/

			if (j == 0) {
				prime_list[j] = find_primes(ciphertext[j], N);
				insert_letter(letter, prime_list[j]);
			}

			if (j == 1 && (ciphertext[j] % prime_list[j]) != 0)
				swap(prime_list, 0, 1);

			prime_list[j+1] = ciphertext[j] / prime_list[j];
			insert_letter(letter, prime_list[j+1]);
		}

#if 0
		for (int k = 0; k < letter_idx; k++)
			printf("%d\n", letter[k]);
#endif

		decipher(plaintext, prime_list, L + 1, letter);
		printf("%s\n", plaintext);
	}

	return 0;
}

/* end of C.c  */
