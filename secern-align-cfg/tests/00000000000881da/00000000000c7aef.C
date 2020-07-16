#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100000

int main() {
	int t, n;
	int i, j;
	char* path;

	path = malloc(MAX_SIZE * sizeof(char));

	scanf("%d", &t);

	for(i = 0; i < t; i++){
    scanf("%d", &n);
    scanf("%s", path);
    printf("Case #%d: ", i+1);
    for(j = 0; j < 2*n; j++){
      if(path[j] == 'E'){
        printf("S");
      } else if(path[j] == 'S'){
        printf("E");
      } else{
        break;
      }
    }
    printf("\n");
	}
	free(path);
	return 0;
}
