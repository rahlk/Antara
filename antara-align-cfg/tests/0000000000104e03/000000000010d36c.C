// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int cases, index_cases;
int i,j,R,C, cells[20][20],steps[400][2],found;

int possible(int N)
{
	int a, b,f;
	for (a = 0, f = 0; (a < R) && (f == 0); a++)
	{
		for (b = 0; (b < C) && (f == 0); b++)
		{
			if (N == 1)
			{
				cells[a][b] = 1;
				
				steps[N-1][0] = a + 1;
				steps[N-1][1] = b + 1;
				f = possible(N+1);
				if (f == 0)
				{
					cells[a][b] = 0;
					steps[N - 1][0] = 0;
					steps[N - 1][1] = 0;
				}

			}
			if (N > R * C)
				return (1);
			else
			{
				if ((cells[a][b]==0) && (steps[N - 2][0]!=(a+1)) && (steps[N - 2][1] != (b+1)) 
					&& ((steps[N - 2][0] + steps[N - 2][1]) != (a+b+2)) && ((steps[N - 2][1] - steps[N - 2][0]) != (b - a )))
				{
					cells[a][b] = 1;
					steps[N - 1][0] = a + 1;
					steps[N - 1][1] = b + 1;
					f = possible(N+1);
					if (f == 0)
					{
						cells[a][b] = 0;
						steps[N - 1][0] = 0;
						steps[N - 1][1] = 0;
					}
				}
			}
		}
	}

	if (f == 1)
		return (1);
	else 
		return(0);
	}





int main()
{

//		freopen_s(&stream,"A-small-attempt1.in", "rt", stdin);
//		freopen("B-small-attempt1.out", "wt", stdout);

	cases = 0;
	//read the number of test cases 
	scanf("%d", &cases);
//	printf("Cases = %d\n",cases);
	for (index_cases = 0; index_cases < cases; index_cases++)
	{
		scanf("%d", &R);
		scanf("%d", &C);
		memset(&steps, 0, sizeof(steps));
		memset(&cells, 0, sizeof(cells));
		found = possible(1);

		printf("Case #%d: ", index_cases + 1 );
		if (found)
		{
			printf("POSSIBLE\n");
			for (i = 0; i < R * C; i++)
				printf("%d %d\n",steps[i][0],steps[i][1]);
		}
		else
			printf("IMPOSSIBLE\n");
	}//end case
} //end 

