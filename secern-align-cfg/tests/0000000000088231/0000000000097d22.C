/*
* File: prob01.c
* Purpose: CodeJam 2019 Qualification Round
* Author: Luke Baird
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BUFFER_SZ 128

void runProb1(int trial);
int intToArrayRev(int* arr, int checkValue);

int main(void) {
  int numInputs = 0;
  scanf("%d", &numInputs);
  for (int i = 0; i < numInputs; i++) {
    runProb1(i+1);
  }
  return EXIT_SUCCESS;
}

/*
* Function: runProb1
* Purpose: solve runProb1
*/
void runProb1(int trial) {
  int checkValue = 0;
  scanf("%d", &checkValue);
  /* pop each entry of checkValue into a buffer */
  int valueAsArray[BUFFER_SZ];
  int A[BUFFER_SZ];
  int B[BUFFER_SZ];
  int len = intToArrayRev(valueAsArray, checkValue);
  for (int i = 0; i <= len; i++) {
    if (valueAsArray[i] == 4) {
      /* split into 2 & 2 */
      A[i] = 2;
      B[i] = 2;
    } else if (valueAsArray[i] == 8) {
      /* split into 2 & 6 */
      A[i] = 2;
      B[i] = 6;
    } else if (valueAsArray[i] == 9) {
      /* split into 3 & 6 */
      A[i] = 3;
      B[i] = 6;
    } else {
      /* otherwise, split */
      A[i] = valueAsArray[i] / 2;
      B[i] = (valueAsArray[i] + 1) / 2;
    }
  }
  /* output case prefix */
  printf("Case #%d: ", trial);
  /* output A and B to the console */
  int outputZeroes = 0; /* false */
  for (int i = len; i >= 0; i--) {
    if (A[i] || outputZeroes) {
      outputZeroes = 1;
      printf("%d",A[i]);
    } else {
      /* do nothing */
    }
  }
  if (!outputZeroes)
    printf("%d",0); /* output a zero */
  outputZeroes = 0; /* reset flag */
  printf(" ");
  for (int i = len; i >= 0; i--) {
    if (B[i] || outputZeroes) {
      outputZeroes = 1;
      printf("%d",B[i]);
    } else {
      /* do nothing */
    }
  }
  if (!outputZeroes)
    printf("%d",0); /* output a zero */
  printf("\n");
}

/*
* Function: intToArrayRev
* Purpose: convert an integer to an array reversed
* Returns: number of integers added to the array zero-based
* Input Example: 1142
* Output Example: [2,4,1,1,0,0,0,0,...]
*/
int intToArrayRev(int *arr, int checkValue) {
  int i = 0;
  for (i = 0; i < BUFFER_SZ && checkValue != 0; i++) {
    /* pull last digit into arr[i] */
    arr[i] = checkValue % 10;
    /* divide checkvalue by 10 */
    checkValue /= 10;
  }
  return i-1;
}