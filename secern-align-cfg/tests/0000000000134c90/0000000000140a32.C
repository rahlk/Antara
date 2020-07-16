#include <stdio.h>
#include <stdbool.h>

bool isPossible(int testCase, int A);

	int  i, index, testCounter=1;
	char enemyPrograms[10][7][10] = { 0 }, tempString[250] = { 0 }, tempSolution[250] = { 0 };
	char Solution[10][10] = { 0 }, testCases, A;

int main(void)
{
	// Input
	scanf("%i" ,&testCases);

	for (testCounter = 1; testCounter <= testCases; testCounter++)
	{
		scanf("%i", &A);
		for (i = 0; i < A; i++)
		{
			scanf("%s", &tempString);
			strcpy(enemyPrograms[testCounter][i], tempString);
		}

		// Solution
		if (isPossible(testCounter, A))
		{
			switch (enemyPrograms[testCounter][0][0])
			{
			case 'R': tempSolution[0] = 'P'; break;
			case 'P': tempSolution[0] = 'S'; break;
			case 'S': tempSolution[0] = 'R'; break;
			default: break;
			}
			strcpy(Solution[testCounter], tempSolution);
		}
		else
		{
			strcpy(Solution[testCounter], "IMPOSSIBLE");
		}
		
		memset(tempSolution, 0, strlen(tempSolution));

	}

	// Output
	for (testCounter = 1; testCounter <= testCases; testCounter++)
	{

		printf("Case #%i: %s \n", testCounter, Solution[testCounter]);
	}

	while (1){};
	return 0;
}

bool isPossible(int testCase, int A)
{
	int size = 7, letterNum, wtf = 0;
	char etalon;

	if (A == 1) return true;

	etalon = enemyPrograms[testCase][0][0];

	for (letterNum = 0; letterNum < size; letterNum++)
	{
			for (wtf = 1; wtf <= A; wtf++)
			{
				if (enemyPrograms[testCase][wtf][letterNum] == etalon) return true;
			}
	}
	
	return false;
}