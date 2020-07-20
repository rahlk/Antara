#include <stdio.h>
#include <math.h>

void processNumber(unsigned int number, int testCaseNumber){
	unsigned int outputNumber1, outputNumber2, currentDigit, position;
	position = 1;
	outputNumber1 = outputNumber2 = 0;
	// Each 4 you see in the given number, we subtract 1 from it and multiply it by it's place value, add it to one of the numbers. Multiply 1 by the place value of the current digit we are looking at and add it to the second number. In the end we output both the numbers.
	while(number > 0){
		currentDigit = number % 10;	
		number = number / 10;
		if(currentDigit == 4) {
			outputNumber1 += ((currentDigit - 1) * position);
			outputNumber2 += position;
		}
		else {
			outputNumber1 += currentDigit * position;
		}
		position *= 10;
	}
	printf("Case #%d: %d %d\n", testCaseNumber + 1, outputNumber1, outputNumber2);
}

void readInput(int noTestCases){
	for(int i = 0; i < noTestCases; i++){
		unsigned int number;
		scanf("%d", &number);
		processNumber(number, i);		
	}
}

int main(){
	int noTestCases;
	scanf("%d", &noTestCases);
	readInput(noTestCases);
}
