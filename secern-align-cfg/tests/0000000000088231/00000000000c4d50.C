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
int main()
{
    
	int sum = 940;
	int num_1, num_2 = 0;
	for (num_1 = 0; num_1<sum; num_1++) {
		num_2 = sum - num_1;
		if (!isNumberContainFour(num_1) && !isNumberContainFour(num_2))
			break;
	}
	printf("num1 = %d num2 = %d", num_1, num_2);

}