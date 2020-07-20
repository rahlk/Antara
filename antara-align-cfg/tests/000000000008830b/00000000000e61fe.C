#include <stdio.h>
#include <stdlib.h>

int factorize(int N);
void bubblesort(int *data, int COUNT);

int main(void) {
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		int N, L, j;
		scanf("%d %d", &N, &L);
		int *ciphertext = (int*)malloc(sizeof(int)*L);
		int *primenumbers = (int*)malloc(sizeof(int)*(L + 1));
		for (j = 0; j < L; j++) {
			scanf("%d", &ciphertext[j]);
		}
		primenumbers[0] = factorize(ciphertext[0]);
		primenumbers[1] = ciphertext[0] / primenumbers[0];
		if ((ciphertext[1] % primenumbers[0])==0) {
			primenumbers[2] = ciphertext[1] / primenumbers[0];
		}
		else {
			primenumbers[2] = ciphertext[1] / primenumbers[1];
		}
		for (j = 3; j < L + 1; j++) {
			primenumbers[j] = ciphertext[j - 1] / primenumbers[j - 1];
		}
		int primeset[26];
		int n = 0, m;
		for (j = 0; j < L + 1; j++) {
			int TF = 1;
			for (m = 0; m < n; m++) {
				if (primenumbers[j] == primeset[m]) {
					TF = 0;
					break;
				}
			}
			if (TF == 0) continue;
			primeset[n] = primenumbers[j];
			n=n+1;
			if(n>=26) break;
		}
		bubblesort(primeset, 26);
		char *plaintext = (char*)malloc(sizeof(char)*(L + 3));
		for (j = 0; j < L + 1; j++) {
			for (n = 0; n < 26; n++) {
				if (primenumbers[j] == primeset[n]) {
					plaintext[j] = 'A' + n;
					break;
				}
			}
		}
		plaintext[j] = '\0';
		printf("Case #%d: %s\n", i + 1, plaintext);
		free(primenumbers);
		free(ciphertext);
		free(plaintext);
	}
	return 0;
}

int factorize(int N) {
	int i = 2, prime;
	while ((N%i) != 0) {
		i++;
	}
	prime = i;
	return prime;
}

void bubblesort(int *data, int COUNT) {
	int temp;
	for (int i = 0; i < COUNT - 1; i++)
	{
		for (int j = 0; j < COUNT - 1 - i; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
}