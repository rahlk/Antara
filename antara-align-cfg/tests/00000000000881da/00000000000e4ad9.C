#include <stdio.h>

void taskBody(char* st, int size, int caseNumber)
{
	int me_down = 0, me_right = 0;
	char ret_st[50001] = { 0 };
	int ret_stPos = 0;

	while ((me_down < size-1) || (me_right < size-1)) {
		
		ret_st[ret_stPos] = st[ret_stPos] == 'S' ? 'E' : 'S';
		switch (myDecision) {
		case 'S': me_down++;  break;
		case 'E': me_right++; break;
		}

		/*move forward*/
		ret_stPos++;
	}
	
	printf("case #%d: %s\n", caseNumber, ret_st);
}
int main()
{
	int numberOfTests;
	char st[50001] = { 0 };
	int size;

	scanf("%d", &numberOfTests);
	//numberOfTests = 1;
	for (int i = 0; i < numberOfTests; i++) {

		scanf("%d %s",&size ,st);
		taskBody(st, size, i + 1);
	}

	
}