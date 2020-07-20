#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>




int T, N[100] = { 0 }, A, B, i;

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
		A = N[i] / 2;
		B = N[i] / 2;
		while (contains_four(A) | contains_four(B))
		{
			A++;
			B--;
		}
	
	// OUTPUT
			printf("Case #%i: %i %i DIFF: %i\n", (i+1), A, B, ( N[i] - (A+B) ) );	
	}
	
	return 0;
}

//-------------------------------------- MAIN END --------------------------------------


bool contains_four(int N)
{
	int dig1, dig2, dig3, dig4, dig5;

	dig1 =	(N / 1) % 10;
	dig2 =	(N / 10) % 10;
	dig3 =	(N / 100) % 10;
	dig4 =	(N / 1000) % 10;
	dig5 =	(N / 10000) % 10;

	if		(dig1 == 4)	return true;
	else if (dig2 == 4)	return true;
	else if (dig3 == 4)	return true;
	else if (dig4 == 4)	return true;
	else if (dig5 == 4) return true;
	else				return false;

}