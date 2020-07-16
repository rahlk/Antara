//
//  code_jam_2.c
//  
//
//  Created by Vincenzo Bellomo on 06/04/2019.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  long x;
  long y;
} Cell;

void move_s(Cell *cell, char *str) {
  char strNew[2];
  strNew[0] = 'S';
  strNew[1] = '\0';
  
  (cell->y)--;
  strcat(str, strNew);
}

void move_e(Cell *cell, char *str) {
  char strNew[2];
  strNew[0] = 'E';
  strNew[1] = '\0';
  
  (cell->x)--;
  strcat(str, strNew);
}

int cellCompare(Cell *cell1, Cell *cell2) {
  if ((cell1->x == cell2->x) && (cell1->y == cell2->y)) {
    return 1;
  }
  return 0;
}

char* str_p(long n) {
  return (char*)malloc(2*n*sizeof(char) -2);
}


int main(int argc, char** argv) {
  char buff_t[120];
  fgets(buff_t, 120, stdin);
  
  int t = atol(buff_t);
  
  long i = 0;
  for (; i < t; i++) {
    char buff_n[6];
    long n = atol(fgets(buff_n, 6, stdin));
    
    char *p_lydia = str_p(n);
    fgets(p_lydia, 2*n-2 + 2, stdin);
    
    Cell *my_cell = (Cell*)malloc(sizeof(Cell));
    my_cell->x = n-1;
    my_cell->y = n-1;
    
    Cell *lydia_cell = (Cell*)malloc(sizeof(Cell));
    lydia_cell->x = n-1;
    lydia_cell->y = n-1;
    
    char *p_my = str_p(n);
    
    long j = 0;
    while (my_cell->x > 0 || my_cell->y > 0) {
      if (cellCompare(my_cell, lydia_cell)) {
        if (p_lydia[j] == 'E') {
          move_s(my_cell, p_my);
        } else {
          move_e(my_cell, p_my);
        }
      } else {
        if (my_cell->x >= my_cell->y) {
          move_e(my_cell, p_my);
        } else {
          move_s(my_cell, p_my);
        }
      }
      
      if (p_lydia[j] == 'E') {
        (lydia_cell->x)--;
      } else {
        (lydia_cell->y)--;
      }
      
      j++;
    }
    
    
    printf("Case #%ld: %s\n", i+1, p_my);
    free(p_lydia);
    free(p_my);
    free(my_cell);
    free(lydia_cell);
  }
}
