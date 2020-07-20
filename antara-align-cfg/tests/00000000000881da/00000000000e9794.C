
#include <stdio.h>
#include <malloc.h>
int currentLocation = 0;
int matrixSize = 0;
char *matrixVisited[1001];
char matrix1[2001];
int count = 0;
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
		
		if (y - 1 >=0  && !(matrixVisited[x][y - 1] == testcase && matrixVisited[x][y] == testcase)) {
			matrix1[count++] = 'E';
			y--;
			jump = 0;
		}
		else if (x - 1 >=0  && !(matrixVisited[x - 1][y] == testcase && matrixVisited[x][y] == testcase)) {
			matrix1[count++] = 'S';
			x--;
			jump = 1;
		}
		
	}
	else {
		if (x - 1 >= 0 && !(matrixVisited[x - 1][y] == testcase && matrixVisited[x][y] == testcase)) {
			matrix1[count++] = 'S';
			x--;
			jump = 1;
		}
		else if (y - 1 >= 0 && !(matrixVisited[x][y - 1] == testcase && matrixVisited[x][y] == testcase)) {
			matrix1[count++] = 'E';
			y--;
			jump = 0;
		}
	}
	if (!(y == 0 && x == 0))
		function1( testcase, jump, x, y);
	return 0;
}

char matrix[2001];

int main() {
	int testcase = 1, testcase1 = 1;
	for (int j = 0; j < 10001; j++) {
		matrixVisited[j] = (char*)malloc(sizeof(char)*1001);
	}
	scanf("%d\n", &testcase);
	while (testcase > 0) {
		int i = 0;
		testcase1++;
		scanf("%d\n", &matrixSize);
		if (matrixSize > 1000)
			return 0;
		do {
			scanf("%c", &matrix[i]);
			i++;
		}while (matrix[i-1] != '\n');
		currentLocation = i - 1;
		function(matrix,testcase,0,0,0);
		matrixVisited[matrixSize - 1][matrixSize - 1] = testcase;
		count = 0;
		function1( testcase,0, matrixSize-1, matrixSize-1);
		printf("Case #%d: ", testcase1);
		for (i = count - 1; i >= 0; i--)
			printf("%c", matrix1[i]);
		printf("\n");
		testcase--;
	}

}