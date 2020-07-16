#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y;
} Point;

#define SUCCESS 1
#define FAILURE 0

int compute(char *me, int current, Point meLoc, int** lydiaPath, int N){
	if(meLoc.x == N - 1 && meLoc.y == N - 1){
		return SUCCESS;
	}
	
	// Decide on the direction to move next.
	if(meLoc.x < N - 1 && !(lydiaPath[meLoc.x][meLoc.y] && lydiaPath[meLoc.x + 1][meLoc.y])){
		meLoc.x += 1;
		me[current] = 'S';
		int outcome = compute(me, current + 1, meLoc, lydiaPath, N);
		if(outcome == SUCCESS){
			return outcome;
		}
	}
	if(meLoc.y < N - 1 && !(lydiaPath[meLoc.x][meLoc.y] && lydiaPath[meLoc.x][meLoc.y + 1])){
		meLoc.y += 1;
		me[current] = 'E';
		int outcome = compute(me, current + 1, meLoc, lydiaPath, N);
		if(outcome == SUCCESS){
			return outcome;
		}
	}
	return FAILURE;
}

void populateLydiaPath(int** lydiaPath, char* pathString, int stringSize, int N){
	Point current = {0, 0};
	lydiaPath[0][0] = 1;
	for(int i = 0; i < stringSize; i++){
		char direction = pathString[i];
		if(direction == 'S'){
			current.x += 1;			
		}
		else{
			current.y += 1;
		}
		lydiaPath[current.x][current.y] = 1;
	}
}

void printMatrix(int** lydiaPath, int N){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%d, ", lydiaPath[i][j]);
		}
		printf("\n");
	}
}

void processCase(int caseNumber){
	int N;
	scanf("%d", &N);
	int stringSize = (2 * N) - 2;
	char *lydia = calloc(stringSize + 1, sizeof(char));
	char *me = calloc(stringSize + 1, sizeof(char));
	int** lydiaPath = calloc(N, sizeof(int*));
	for(int i = 0; i < N; i++){
		lydiaPath[i] = calloc(N, sizeof(int));
	}
	scanf("%s", lydia);
	
	Point meLoc = {0, 0};
	populateLydiaPath(lydiaPath, lydia, stringSize, N);

	printMatrix(lydiaPath, N);

	//printf("\n%s\n", lydia);
	
	

	compute(me, 0, meLoc, lydiaPath, N);

	printf("Case #%d: %s, %s\n", caseNumber, me, lydia);
	
	free(lydia);
	free(me);
	for(int i = 0; i < N; i++){
		free(lydiaPath[i]);
	}
	free(lydiaPath);

}

int main(){
	int numberCases;
	scanf("%d", &numberCases);
	for(int i = 1; i <= numberCases; i++){
		processCase(i);
	}
}
