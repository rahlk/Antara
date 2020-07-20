#include <stdio.h>

int isNumberContainFour(int number) {
	int tempNum = number;
	int digit = 0;

	while (tempNum>0) {
		digit = tempNum % 10;
		if (digit == 4)
			return 1;
		tempNum = tempNum / 10;
	}

	return 0;
}

int optimizeNumber(int number) {

	int multiplyFactor = 1;
	number = number / 10;
	
	while (number > 0) {
		int digit = number % 10;		
		if (digit == 4)
			multiplyFactor *= 10;
		number = number / 10;

	}
	return (multiplyFactor - 1);
}

void taskBody(int number, int caseNumber)
{
    int num_1, num_2 = 0;
	int twoFoursFlag = 0;
	for (num_1 = number; num_1 > 0; num_1--) {
		if (isNumberContainFour(num_1)) {
			twoFoursFlag += 1;			
			if (twoFoursFlag == 2) {
				//printf("\nnum_1 before %d ", num_1);
				num_1 -= optimizeNumber(num_1);
				//printf(" After %d", num_1);
				twoFoursFlag = 0;
			}			
			continue;
		}
		twoFoursFlag = 0;
		
		num_2 = number - num_1;
		if (!isNumberContainFour(num_2))
			break;
	}
	printf("case #%d: %d %d\n", caseNumber + 1, num_1, num_2);
}

int main()
{
	int numberOfTests;
	int number; 
	
	scanf ("%d", &numberOfTests);
	
	for (int i=0; i < numberOfTests; i++ ){
	    scanf ("%d", &number);
	    taskBody(number, i);
	}
}