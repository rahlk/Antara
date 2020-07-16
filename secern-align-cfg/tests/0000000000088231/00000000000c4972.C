#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIGITS_SIZE 110

int main() {
	int t;
	char* a;
	char* b;
	a = malloc(DIGITS_SIZE * sizeof(char));
	b = malloc(DIGITS_SIZE * sizeof(char));
	int i, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%s", a);
    for(j = 0; j < DIGITS_SIZE && a[j] != '\0'; j++){
      if(a[j] == '4'){
        b[j] = '1';
        a[j] = '3';
      }
      else{
        b[j] = '0';
      }
    }
    b[j] = '\0';
    printf(" Case #%d: %s %s", i, a, b);
	}
	free(a);
	free(b);
	return 0;
}
