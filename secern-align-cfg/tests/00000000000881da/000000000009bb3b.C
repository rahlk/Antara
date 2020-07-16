/*
* File: prob02.c
* Purpose: CodeJam 2019 Qualification Round Problem 2
* Author: Luke Baird
*/
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SZ_SM 128
#define BUFF_SZ_LG 1024

void runProb2(int trial);

typedef struct {
  int x;
  int y;
} Square;

int main(void) {
  int numInputs = 0;
  scanf("%d", &numInputs);
  for (int i = 0; i < numInputs; i++) {
    runProb2(i+1);
  }
  return EXIT_SUCCESS;
}

/*
* Function: runProb1
* Purpose: solve problem 2
*/
void runProb2(int trial) {
  int N = 0;
  scanf("%d", &N);
  char soln[BUFF_SZ_LG];
  scanf("%s", soln);
  /* algorithm: if current square is visited
  * go to the other direction
  * if current square is NOT visited
  * go towards the center diagonal
  */
  char moves[BUFF_SZ_LG];
  Square solnSquare = {0,0};
  Square mySquare = {0,0};
  for (int i = 0; i < 2*(N-1); i++) {
    if (solnSquare.x == mySquare.x && solnSquare.y == mySquare.y) {
      if (soln[i] == 'E') {
        moves[i] = 'S';
      } else {
        moves[i] = 'E';
      }
    } else {
      /* go towards the center */
      if (mySquare.x < mySquare.y) {
        moves[i] = 'E';
      } else if (mySquare.y < mySquare.x) {
        moves[i] = 'S';
      } else if (solnSquare.x < mySquare.x) {
        /* it is south of us, go east */
        moves[i] = 'E';
      } else {
        /* it is east of us, go south */
        moves[i] = 'S';
      }
    }
    /* update mySquare and solnSquare */
    if (moves[i] == 'E') {
      mySquare.x++;
    } else {
      mySquare.y++;
    }
    if (soln[i] == 'E') {
      solnSquare.x++;
    } else {
      solnSquare.y++;
    }
  }
  /* output solution */
  printf("Case #%d: ", trial);
  for (int i = 0; i < 2*(N-1); i++) {
    printf("%c", moves[i]);
  }
  printf("\n");
}