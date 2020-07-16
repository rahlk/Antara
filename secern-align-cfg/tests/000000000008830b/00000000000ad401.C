#include <stdio.h>

#define DBG 0

void insert(int *primes, int num);

int main()
{
	int TC, N, L; 
	int tc;
	int cypertext[101];
	int component[101];
	int component2[101];
	int plaintext_int[105];
	char plaintext[105];
	int primes[26];
	int i, j;
	int remainder;
	int prime1, prime2;
	

	scanf("%d", &TC);

	for (tc=1; tc<=TC; tc++) {
		scanf("%d", &N);
		scanf("%d", &L);

		for (i=0; i<L; i++) {
			scanf("%d", &cypertext[i]);
		}
#if DBG
		for (i=0; i<L; i++) {
			printf("%d ", cypertext[i]);
		}
		printf("\n");
#endif

		for (i=0; i<26; i++)
			primes[i] = 1000000000;

		/* get primes of first cypertext */
		//for (i=3; i<cypertext[0]; i++) {
		for (i=2; i<cypertext[0]; i++) {
			remainder = cypertext[0] % i;
			if (remainder == 0) {
				component[0] = i;
				component2[0] = cypertext[0] / i;
				insert(primes, component[0]);
				insert(primes, component2[0]);
				break;
#if DBG
				printf("prime1 : %d\n", component[0]);
				printf("prime2 : %d\n", component2[0]);
				printf("cyper  : %d\n", cypertext[0]);
				printf("pr1*pr2: %d\n", component[0] * component2[0]);
#endif
			}

		}
		
		/* get primes of cypertext */
		for (i=1; i<L; i++) {
			remainder = cypertext[i] % component[i-1];
			if (remainder == 0) {
				prime1 = component[i-1];
				prime2 = cypertext[i] / prime1;
			} else {
				prime1 = component2[i-1];
				prime2 = cypertext[i] / prime1;

			}
			component[i] = prime1;
			component2[i] = prime2;
			insert(primes, prime2);
			plaintext_int[i] = prime1;
#if DBG
			printf("prime1 : %d\n", prime1);
			printf("prime2 : %d\n", prime2);
			//printf("cyper  : %d\n", cypertext[i]);
			//printf("pr1*pr2: %d\n", prime1 * prime2);
#endif
		}
		plaintext_int[i] = prime2;
		plaintext_int[0] = cypertext[0] / plaintext_int[1];
#if DBG
		printf("\n");
		printf("primes : ");
		for (i=0; i<26; i++) {
			printf("%d ", primes[i]);
		}
		printf("\n");
		printf("plaintext : ");
		for (i=0; i<L+1; i++) {
			printf("%d ", plaintext_int[i]);
		}
		printf("\n");
#endif
		/* convert plaintext int2char */
		for (i=0; i<L+1; i++) {
			for (j=0; j<26; j++) {
				if (plaintext_int[i] == primes[j])
					break;
			}
			plaintext[i] = 'A' + j;
		}
		plaintext[L+1] = '\0';
		
		printf("Case #%d: %s\n", tc, plaintext);

	}
	
	
	return 0;	
}

void insert(int *primes, int num) {
	int i, j;
	for (i=0; i<26; i++) {
		if (num == primes[i])
			return;
		if (num < primes[i])
			break;
	}

	if (primes[i] == 1000000000) {
		primes[i] = num;
		return;
	}

	for (j=24; j>=i; j--) {
		primes[j+1] = primes[j];
	}
	primes[i] = num;

}

