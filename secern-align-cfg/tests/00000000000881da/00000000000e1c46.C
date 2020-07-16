#include <stdio.h>

void taskBody(char* st, int size, int caseNumber)
{
	int me_down = 0, me_right = 0;
	int him_down = 0, him_right = 0;
	char ret_st[50001] = { 0 };
	int ret_stPos = 0;
	int sameRubbicFlag = 0;
	char myDecision = 0; 
	int myFutureMove;
	
	//printf ("\nStarting %s\n", st);

	while ((me_down < size-1) || (me_right < size-1)) {
		if ((me_down == him_down) && (me_right == him_right))
			sameRubbicFlag = 1;


		//myDecision = desicionMaking(sameRubbicFlag, ret_stPos, st);
		if (sameRubbicFlag)
		{/*0-down, 1-right*/
			myDecision = (st[ret_stPos] == 'S') ? 'E' : 'S';
			myFutureMove = (st[ret_stPos] == 'S') ? 'S' : 'E';
			sameRubbicFlag = 0;
		}		
		else
		{
			myDecision = myFutureMove;
		}
		
		ret_st[ret_stPos] = myDecision;
		switch (myDecision) {
		case 'S': me_down++;  break;
		case 'E': me_right++; break;
		}

		/*update him*/
		(st[ret_stPos] == 'S') ? him_down++ : him_right++;

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

	//scanf_s("%d", &numberOfTests);
	numberOfTests = 1;
	for (int i = 0; i < numberOfTests; i++) {

		scanf("%d %s",&size ,st);
		//size = 3;
		//strcpy_s(st, "ESES");
		taskBody(st, size, i + 1);
	}

	
}