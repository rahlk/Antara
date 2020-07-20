#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
	int count;
	long val;
} MSP;

typedef struct {
	long a;
	long b;
} Pair;

MSP getMostSigPos(long n) {
	int fc = 0;
	long fval = 0;
	int c = 0;
	long val = 0;
	long ten = 1;
	while(n > 0) {
		int r = n%10;
		if(r == 4) {
			fc = c;
			fval = val;
		}
		c++;
		val += r*ten;
		ten *= 10;
		n /= 10;
	}
	MSP result;
	result.count = fc;
	result.val = val;
	return result;
}

Pair getPair(long N) {
	long a = N/2;
	long b = N-a;
	MSP ai = getMostSigPos(a);
	MSP bi = getMostSigPos(b);
	while(ai.count != 0 || bi.count != 0) {
		if(ai.count != 0) {
			a -= (ai.val+1);
			b = N-a;
		} else {
			b += pow(10,bi.count) - bi.val;
			a = N-b;
		}
		ai = getMostSigPos(a);
        	bi = getMostSigPos(b);
	}
	Pair p;
	p.a = a;
	p.b = b;
	return p;
}

int main() {
	int T;
	scanf("%d", &T);
	int i = 1;
	while(T--) {
		long N;
		scanf("%ld", &N);
		Pair p = getPair(N);
		printf("Case #%d: %ld %ld\n", i++, p.a, p.b);
	}
	return 0;
}
