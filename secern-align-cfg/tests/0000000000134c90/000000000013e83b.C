#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int n;
	char** list;
	int *size;
};

char* robotArm(struct node input){
	int k = 0;
	char* result = (char*)malloc(k+1 * sizeof(char));
	for (int j = 0; j <= 500; j++){
		int s = 0, p = 0, r = 0;
		for (int i = 0; i < input.n && (s == 0 || r == 0 || p == 0); i++){
			if (input.list[i][j%input.size[i]] == 'S')
				s++;
			else if (input.list[i][j%input.size[i]] == 'R')
				r++;
			else
				p++;
		}
		if (s != 0 && r != 0 && p != 0)
			return "IMPOSSIBLE";
		else if (s == 0){
			result[k++] = 'S';
			break;
		}
		else if (p == 0){
			result[k++] = 'P';
			break;
		}
		else{
			result[k++] = 'R';
			break;
		}
		result = (char*)realloc(result, k+1);
	}
	result[k] = '\0';
	return result;
}

int main(){
	int tests;
	scanf("%d", &tests);
	struct node *input = (struct node*)malloc(tests*sizeof(struct node));
	for (int i = 0; i < tests; i++){
		scanf("%d %d", &input[i].n);
		input[i].list = (char **)malloc(input[i].n*sizeof(char*));
		input[i].size = (int *)malloc(input[i].n * sizeof(int));
		for (int j = 0; j < input[i].n; j++){
			input[i].list[j] = (char *)malloc(1 * sizeof(char));
			scanf("%s", input[i].list[j]);
			input[i].size[j] = strlen(input[i].list[j]);
		}
	}
	for (int i = 0; i < tests; i++){
		printf("Case #%d: %s\n", i + 1, robotArm(input[i]));
	}
	system("pause");
	return 0;
}