#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>




int T, i;
int N[100] = { 0 }, A, B;

bool contains_four(int);
//------------------------------------- MAIN START -------------------------------------
int main(void)
{
	//  INPUT
	scanf("%i", &T);
	for (i = 0; i < T; i++)
	{
		scanf("\n %i", &N[i]);
	}

	// PROCESS
	for (i = 0; i < T; i++)
	{
		if (N[i] % 2 == 0)
		{
			A = N[i] / 2;
			B = N[i] / 2;
		}
		else
		{
			A = (N[i] + 1) / 2;
			B = (N[i] - 1) / 2;
		}

		do
		{
			if (((A / 1) % 10) == 4)			{ A++; B--; }
			if (((A / 10) % 10) == 4)			{ A += 10; B -= 10; }
			if (((A / 100) % 10) == 4)			{ A += 100; B -= 100; }
			if (((A / 1000) % 10) == 4)			{ A += 1000; B -= 1000; }
			if (((A / 10000) % 10) == 4)		{ A += 10000; B -= 10000; }
			if (((A / 100000) % 10) == 4)		{ A += 100000; B -= 100000; }
			if (((A / 1000000) % 10) == 4)		{ A += 1000000; B -= 1000000; }
			if (((A / 10000000) % 10) == 4)		{ A += 10000000; B -= 10000000; }
			if (((A / 100000000) % 10) == 4)	{ A += 100000000; B -= 100000000; }

			if (((B / 1) % 10) == 4)			{ A++; B--; }
			if (((B / 10) % 10) == 4)			{ A += 10; B -= 10; }
			if (((B / 100) % 10) == 4)			{ A += 100; B -= 100; }
			if (((B / 1000) % 10) == 4)			{ A += 1000; B -= 1000; }
			if (((B / 10000) % 10) == 4)		{ A += 10000; B -= 10000; }
			if (((B / 100000) % 10) == 4)		{ A += 100000; B -= 100000; }
			if (((B / 1000000) % 10) == 4)		{ A += 1000000; B -= 1000000; }
			if (((B / 10000000) % 10) == 4)		{ A += 10000000; B -= 10000000; }
			if (((B / 100000000) % 10) == 4)	{ A += 100000000; B -= 100000000; }
		} while (contains_four(A) | contains_four(B));



		// OUTPUT
		printf("Case #%i: %i %i\n", (i + 1), A, B);
	}
	while (1){};
	return 0;
}

//-------------------------------------- MAIN END --------------------------------------


bool contains_four(int N)
{
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9;

	dig1 = (N / 1) % 10;
	dig2 = (N / 10) % 10;
	dig3 = (N / 100) % 10;
	dig4 = (N / 1000) % 10;
	dig5 = (N / 10000) % 10;
	dig6 = (N / 100000) % 10;
	dig7 = (N / 1000000) % 10;
	dig8 = (N / 10000000) % 10;
	dig9 = (N / 100000000) % 10;

	if		(dig1 == 4)	return true;
	else if (dig2 == 4)	return true;
	else if (dig3 == 4)	return true;
	else if (dig4 == 4)	return true;
	else if (dig5 == 4) return true;
	else if (dig6 == 4)	return true;
	else if (dig7 == 4)	return true;
	else if (dig8 == 4)	return true;
	else if (dig9 == 4) return true;
	else				return false;
}