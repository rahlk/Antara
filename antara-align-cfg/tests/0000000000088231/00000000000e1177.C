include <stdio.h>
#include <string.h>


int main() {
	int numTestcase;

	scanf("%d", &numTestcase);
	for (int i=0; i<numTestcase; i++){
		int inputInteger;

		scanf("%d", &inputInteger);

		int inputN[100], outputA[100], outputB[100];
		memset(inputN, 0, sizeof(inputN));
		memset(outputA, 0, sizeof(outputA));
		memset(outputB, 0, sizeof(outputB));

		for(int j=99; j>=0; j--){
			inputN[j] = inputInteger % 10;
			inputInteger = inputInteger / 10;
		}

		memcpy(outputA, inputN, sizeof(inputN));

		for(int k=0; k<100; k++){
			if (outputA[k]==4){
				outputA[k] = 3;
				outputB[k] = 1;
			}
		}

		int resultA = 0, resultB = 0;

		for(int p=0; p<100; p++){
			resultA = 10 * resultA + outputA[p];
			resultB = 10 * resultB + outputB[p];
		}


		printf("Case #%d: %d %d\n", i+1, resultA, resultB);
	}

	return 0;
}
