/*
	Custom BigInteger implementation
	since the GMP does not compile!
	By Cyrille Yemeli Tasse @ 2019
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <assert.h>

typedef unsigned int uint;

const uint base = 10;


void print_number (const char* pre, const uint* n, uint N);
uint set (uint* y, const char* n);
void copy (uint* y, const uint* n, uint N);
int cmp (const uint* n, const uint* m, uint N, uint M);
uint mul_ui (uint* y, const uint* n, const uint m, uint N);
uint sub (uint* y, const uint* n, const uint* m, uint N, uint M);
uint gcd (uint* y, const uint* n, const uint* m, uint N, uint M);
uint modiv (uint* q, uint* n, const uint* m, uint N, uint M);


typedef struct _Node {
	const uint* prime;
	uint size;
	char c;
} Node;


int compare (const void* a, const void* b)
{
	const Node* n = *(const Node**)a;
	const Node* m = *(const Node**)b;
	return cmp(n->prime, m->prime, n->size, m->size);
}


const Node* add_prime (const uint* y, uint ys, Node* primes, int* primesCount)
{
	int count = *primesCount;
	for(int i=0; i < count; i++)
	{
		const Node* node = &primes[i];
		if(cmp(y, node->prime, ys, node->size)==0)
			return node;
	}
	primes[count].prime = y;
	primes[count].size = ys;
	primes[count].c = '.';
	*primesCount = count+1;
	return &primes[count];
}


int main()
{
	char str[200];
	uint* memory = (uint*)malloc(1000000);

	Node primes[26];
	Node* tosort[26];
	const Node* P[200];

	int x, T;
	scanf("%d", &T);
	for(x=1; x<=T; x++)
	{
		int i, L;
		scanf("%s %d", str, &L);

		int maxlen = strlen(str)*2+2;
		int primesCount = 0;

		scanf("%s", str); // get L0
		uint* n = memory;
		uint ns = set(n, str); // set L0

		scanf("%s", str); // get L1
		uint* m = n + ns;
		uint ms = set(m, str); // set L1

		uint* y = m + ms; // prepare location of P1
		if(y < n + maxlen) y = n + maxlen; // reserve space
		uint ys = gcd(y, n, m, ns, ms); // P1 = gcd(L0, L1)
		P[1] = add_prime(y, ys, primes, &primesCount);

		uint* t = m; // save location of L1
		uint ts = ms;

		m = y; // save location of P1
		ms = ys;

		y = y + ys; // prepare location of P0
		ys = modiv(y, n, m, ns, ms); // P0 = L0 / P1
		P[0] = add_prime(y, ys, primes, &primesCount);

		y = y + ys; // prepare location of P2
		ys = modiv(y, t, m, ts, ms); // P2 = L1 / P1
		P[2] = add_prime(y, ys, primes, &primesCount);

		for(i=2; i<L; i++)
		{
			scanf("%s", str);
			ns = set(n, str); // set Li

			m = y; // save location of Pi
			ms = ys;

			y = y + ys; // prepare location of P{i+1}
			ys = modiv(y, n, m, ns, ms); // P{i+1} = Li / Pi
			P[i+1] = add_prime(y, ys, primes, &primesCount);
		}

		for(i=0; i<26; i++)
			tosort[i] = &primes[i];

		qsort(tosort, 26, sizeof(*tosort), compare);

		for(i=0; i<26; i++)
			tosort[i]->c = 'A'+i;

		for(i=0; i < L+1; i++)
			str[i] = P[i]->c;
		str[i] = 0;

		printf("Case #%d: %s\n", x, str);
	}
	return 0;
}


//--------------------------------------------------------


void print_number (const char* pre, const uint* n, uint N)
{
	printf("%s (%u) ", pre, N);
	for(uint i=0; i<N; i++)
		printf("%u", n[i]);
	printf("\n");
}


uint set (uint* y, const char* n)
{
	uint i;
	for(i=0; ; i++)
	{
		char c = n[i];
		if('0'<=c && c<='9')
			y[i] = c - '0';
		else break;
	}
	return i;
}


void copy (uint* y, const uint* n, uint N){
	memmove(y, n, N * sizeof(*n));
}


int cmp (const uint* n, const uint* m, uint N, uint M)
{
	// trim leading 0s (not optional)
	while(N!=0 && *n==0) { N--; n++; }
	while(M!=0 && *m==0) { M--; m++; }

	if(N<M) return -1;
	if(N>M) return +1;

	for(uint i=0; i<N; i++)
	{
		uint a = n[i];
		uint b = m[i];
		if(a<b) return -1;
		if(a>b) return +1;
	}
	return 0;
}


uint mul_ui (uint* y, const uint* n, const uint m, uint N)
{
	uint R = N;
	uint* r = y + R+1;
	uint carry = 0;
	while(r > y)
	{
		uint a = N==0 ? 0 : n[--N];
		a = a*m + carry;

		if(a >= base){
			carry = a / base;
			a = a % base;
		}else carry = 0;

		*--r = a;
	}
	return R+1;
}


uint sub (uint* y, const uint* n, const uint* m, uint N, uint M)
{
	// trim leading 0s (optional)
	while(N!=0 && *n==0) { N--; n++; }
	while(M!=0 && *m==0) { M--; m++; }

	uint R = N>M ? N : M;
	uint* r = y + R+1;
	uint borrow = 0;
	while(r > y)
	{
		uint a = N==0 ? 0 : n[--N];
		uint b = M==0 ? 0 : m[--M];

		b += borrow;
		if(a < b){
			a += base;
			borrow = 1;
		}else borrow = 0;

		*--r = a-b;
	}
	return R+1;
}


uint modiv (uint* q, uint* n, const uint* m, uint N, uint M)
{
	uint Q = 0;
	uint* y = q+N;
	uint* in = n;

	for(uint* t = in+1; t <= in+N; t++)
	{
		uint T = t - n;
		if(cmp(n, m, T, M) < 0){
			if(Q!=0) q[Q++] = 0;
			continue;
		}
		for(uint d=1; d < base; d++)
		{
			uint Y = mul_ui(y, m, d, M);
			uint* r = y + Y;
			uint R = sub(r, n, y, T, Y);

			if(cmp(r, m, R, M) < 0)
			{
				q[Q++] = d;
				while(*r==0 && R!=0) { r++; R--; }
				n = t-R;
				copy(n, r, R);
				break;
			}
		}
	}
	N = in+N-n;
	copy(in, n, N);
	q[Q] = N;
	return Q;
}


uint gcd (uint* y, const uint* n, const uint* m, uint N, uint M)
{
	// trim leading 0s (not optional)
	while(N!=0 && *n==0) { N--; n++; }
	while(M!=0 && *m==0) { M--; m++; }

	copy(y, n, N);
	if(M==0) return N;

	uint* q = y + N;
	uint Q = modiv(q, y, m, N, M);
	uint R = q[Q]; // get size of remainder

	R = gcd(q, m, y, M, R);
	copy(y, q, R);
	return R;
}

