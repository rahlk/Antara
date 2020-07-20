#include <stdio.h>
#include <stdlib.h>

unsigned long *readBits(unsigned long *arr, int n);
unsigned long *printBits(unsigned long *arr, int n, FILE * stream);
unsigned long *interact(unsigned long *nextBuilder, int printn,
			unsigned long *in, int readn, unsigned long fill);
unsigned long getBit(unsigned long *arr, long b);
int process(int iter);

unsigned long *readBits(unsigned long *arr, int n)
{
	char c;
	long i;
	for (i = 0; i < n; i++) {
		if (!(i % 64))
			arr[i / 64] = 0;
		arr[i / 64] <<= 1;
		while ((c = (char)getchar()) != '0' && c != '1') {
		}
		arr[i / 64] += c - '0';
	}
	arr[i / 64] <<= ((i - 1) / 64 + 1) * 64 - i;
	return arr;
}

unsigned long *printBits(unsigned long *arr, int n, FILE * stream)
{
	long i;
	for (i = 0; i < n; i++)
		// fputc('0' + (arr[i / 64] >> (63 - i % 64)) % 2, stream);
		fputc('0' + getBit(arr, i), stream);
	fputc('\n', stream);
	fflush(stream);
	return arr;
}

unsigned long *interact(unsigned long *nextBuilder, int printn,
			unsigned long *in, int readn, unsigned long fill)
{
	long i;
	for (i = 0; i < 16; i++)
		nextBuilder[i] = fill;
	printBits(nextBuilder, printn, stdout);
	readBits(in, readn);
	return in;
}

unsigned long getBit(unsigned long *arr, long b)
{
	return ((arr[b / 64] >> (63 - b % 64)) % 2);
}

int process(int iter)
{
	int n, b, f;
	long i;
	scanf("%d %d %d", &n, &b, &f);

	unsigned long next[16], in1[16], in2[16], in3[16], in4[16], in5[16];
	interact(next, n, in1, n - b, 0xffff0000ffff0000);
	interact(next, n, in2, n - b, 0x00ff00ff00ff00ff);
	interact(next, n, in3, n - b, 0x0f0f0f0f0f0f0f0f);
	interact(next, n, in4, n - b, 0x3333333333333333);
	interact(next, n, in5, n - b, 0x5555555555555555);

	int k = 0;
	long prev = -1;
	int prevgrp = 1;
	for (i = 0; i < n - b; i++)
	{
		if(getBit(in1,i)!=prevgrp)
		{
			prevgrp = !prevgrp;
			k++;
		}
		if (((((getBit(in2,i))*2 +
				getBit(in3,i))*2 +
				getBit(in4,i))*2 +
				getBit(in5,i) +
				(k) * 16) - prev++ >1)
		{
			printf("%ld ", prev);
			i--;
		}
	}
	while (n - prev++ > 1) printf("%ld ", prev);
	printf("\n");
	fflush(stdout);
}

int main()
{
	int t, status;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		process(i);
		scanf("%d", &status);
		if (status != 1) {
			printf("Wrong Answer\n");
			fflush(stdout);
			return 0;
		}
	}
	return 0;
}
