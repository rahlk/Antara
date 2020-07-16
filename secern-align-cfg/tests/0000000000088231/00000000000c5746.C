#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIGITS_SIZE 110


int main() {
	int t, leadingZero, bHead;
	char* a;
	char* b;
	a = malloc(DIGITS_SIZE * sizeof(char));
	b = malloc(DIGITS_SIZE * sizeof(char));
	int i, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
	  leadingZero = 1;
	  bHead = 0;
		scanf("%s", a);
    for(j = 0; j < DIGITS_SIZE && a[j] != '\0'; j++){
      if(a[j] == '4'){
        b[bHead] = '1';
        a[j] = '3';
        leadingZero = 0;
        bHead++;
      }
      else{
        if(leadingZero == 0){
          b[bHead] = '0';
          bHead++;
        }
      }
    }
    b[bHead] = '\0';
    printf(" Case #%d: %s %s\n", i+1, a, b);
	}
	free(a);
	free(b);
	return 0;
}
