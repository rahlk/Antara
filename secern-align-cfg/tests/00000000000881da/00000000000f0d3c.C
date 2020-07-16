// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int cases, index_cases;
long int N,i, l;
char c[100000], D[100000];


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
		scanf("%d", &N);
		scanf("%s", &c);
		l = strlen(c);
		printf("Case #%d: ", index_cases + 1);
		for (i = 0; i < l; i++)
		{
			if (c[i] == 'E')
				printf("%c", 'S');
			else
				printf("%c", 'E');
		}
		printf("\n");
	}//end case
} //end 

