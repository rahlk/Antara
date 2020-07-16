#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double getprime(double num);
void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(void)
{
	int testCase, i, Len, l;

	scanf("%d", &testCase);
	for(i = 0; i < testCase; ++i)
	{
		int count = 0;
		fflush(stdin);
		double num, *ptr, *primeList, first, *sortedPrime;
		scanf("%lf", &num);
		scanf("%d", &Len);

		ptr = (double *)malloc(Len*sizeof(double));
		primeList = (double *)malloc((Len+1)*sizeof(double));
		sortedPrime = (double *)malloc(26*sizeof(double));

		for(int j = 0; j < Len; ++j)
			scanf("%lf", &ptr[j]);
		first = getprime(ptr[0]);
		if(fmod(ptr[1], first) == 0)
		{
			primeList[1] = first;
			primeList[0] = ptr[0]/first;
		}
		else
		{
			primeList[0] = first;
			primeList[1] = ptr[0]/first;
		}

		for(int j = 2; j <= Len; ++j)
			primeList[j] = ptr[j-1]/primeList[j-1];

		for(int k = 0; k <= Len; ++k)
		{
			for(l = 0; l < k; ++l)
				if(primeList[k] == primeList[l])
					break;
			if(k == l)
				sortedPrime[count++] = primeList[k];
		}
		for(int j = 0; j < 26; ++j)
		printf("%lf ", sortedPrime[j]);
{
			int si, sj;
   			for (si = 0; si < count; si++)
       			for (sj = 0; sj < count-si-1; sj++)
           			if (sortedPrime[sj] > sortedPrime[sj+1])
              			swap(&sortedPrime[sj], &sortedPrime[sj+1]);

}
		printf("Case #%d: ", i+1);
		for(int j = 0; j <=Len; ++j)
			for(count = 0; count < 26; ++count)
				if(primeList[j] == sortedPrime[count])
					printf("%c", 'A' + count);

		putchar('\n');

	}
	return 0;
}

double getprime(double num)
{
	int isprime;
	double i, j;
	for(i = 3; i <= num; ++i)
	{
		isprime = 1;
		for(j = 2; j <= i/2; ++j)
			if(fmod(i, j) == 0)
			{
				isprime = 0;
				break;
			}
		if(isprime && fmod(num, i) == 0)
			return i;
	}
}
