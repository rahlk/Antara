#include <stdio.h>
int currentLocation = 0;
int matrixSize = 0;
char matrixVisited[10][10];

int function(char* matrix, int testcase,int jump, int x, int y) {
	if (matrix[jump] == 'S') {
		matrixVisited[x + 1][y] = testcase;
		x++;
	}
	else {
		matrixVisited[x][y + 1] = testcase;
		y++;
	}
	jump++;
	if (jump < currentLocation)
		function(matrix, testcase, jump, x, y);
	return 0;
}

int function1(int testcase, int jump, int x, int y) {
	if (jump == 1) {
		jump = 0;
		if (y + 1 < matrixSize && !(matrixVisited[x][y + 1] == testcase && matrixVisited[x][y] == testcase)) {
			printf("E");
			y++;
			jump = 1;
		}
		else if (x + 1 < matrixSize && !(matrixVisited[x + 1][y] == testcase && matrixVisited[x][y] == testcase)) {
			printf("S");
			x++;
			jump = 1;
		}
		
	}
	else {
		jump = 1;
		if (x + 1 < matrixSize && !(matrixVisited[x + 1][y] == testcase && matrixVisited[x][y] == testcase)) {
			printf("S");
			x++;
			jump = 0;
		}
		else if (y + 1 < matrixSize && !(matrixVisited[x][y + 1] == testcase && matrixVisited[x][y] == testcase)) {
			printf("E");
			y++;
			jump = 0;
		}
	}
	if (!(y == matrixSize-1 && x == matrixSize-1))
		function1( testcase, jump, x, y);
	return 0;
}


int main() {
	int testcase = 0, testcase1 = 1;
	scanf("%d\n", &testcase);
	char matrix[50001];
	while (testcase > 0) {
	    matrix[0] = 0;
		int i = 0;
		testcase1++;
		scanf("%d\n", &matrixSize);
		do {
			scanf("%c", &matrix[i]);
			i++;
		}while (matrix[i-1] != '\n');
		currentLocation = i - 1;
		function(matrix,testcase,0,0,0);
		matrixVisited[0][0] = testcase;
		printf("Case #%d: ", testcase1);
		function1( testcase,0, 0, 0);
		printf("\n");
		testcase--;
	}

}