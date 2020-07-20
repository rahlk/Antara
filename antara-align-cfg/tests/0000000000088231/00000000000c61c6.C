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
void taskBody(int number, int caseNumber)
{
    int num_1, num_2 = 0;
    for (num_1 = 1; num_1<number; num_1++) {
		num_2 = number - num_1;
		if (!isNumberContainFour(num_1) && !isNumberContainFour(num_2))
			break;
	}
	printf("case #%d: %d %d\n", caseNumber, num_1, num_2);
}
int main()
{
	int numberOfTests;
	int number; 
	
	scanf ("%d", &numberOfTests);
	printf ("Number of test is %d", numberOfTests);
	
	for (int i=0; i < numberOfTests; i++ ){
	    scanf ("%d", &number);
	    taskBody(number, i);
	}
}