#include <stdio.h>

int containsFour(long long int x)
{
	long long int index = 10;
	while(x / (index/10))
	{
		if((x % index) / (index / 10) == 4)
			return index/10;
		index*= 10;
	}

	return 0;
}

int main(int argc, char **argv)
{
	int nTestCases;
	scanf("%d", &nTestCases);

	int i;
	for(i = 0; i < nTestCases; i++)
	{
		long long int N, A, B, tempN;
		scanf("%lld", &N);
		
		tempN = N;

		A = B = 0;
		while(containsFour(tempN))
		{
			long long int index = containsFour(tempN);
			A += index;
			B -= index;
			tempN -= index;
		}
		
		printf("Case #%d: %lld %lld\n", i+1, A, N+B);
	}

	return 0;
}
