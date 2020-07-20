#include <stdio.h>

#define false 0
#define true 1

typedef unsigned char bool;

bool hasFour(int a)
{

	int dividend = a;

	while((dividend/10)!=0)
	{
		if( dividend %10 == 4 )
		{
			return true;
		}

		dividend /= 10;
	}

	if( dividend %10 == 4 )
	{
		return true;
	}
	else
	{
		return false;
	}
}



void findPairOf(int N)
{
	int first = 1;
	int second = N-1;

	while(hasFour(second) || hasFour(second))
	{
		first++;
		second = N - first;

		if(!hasFour(second) && !hasFour(second))
		{
			break;
		}
	}


	printf("%d %d\n", first, second);
}
int main()
{
    printf("Hello world\n");
    
    	int testcases = 0;

	for(int N = 1 ; N <= 100000 ; N++)
	{
		if(hasFour(N))
		{
			printf("Case #%d : ", testcases+1);
			testcases++;
			findPairOf(N);

			if(testcases == 100)
				break;
		}
	}
    return 0;
}