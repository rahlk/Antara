#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void clearBox(int box[][20]) {
  int i, j;
  int count = 20;
  for (i = 0; i < count; i++) {
    for (j = 0; j < count; j++) {
      box[i][j] = 0;
    }
  }
  return;
}

void sort(int num, int *array) {
  int i, j;
  int tmp;
  for (i=0; i<num; i++) {
    for (j=0; j<num; j++) {
        if (array[i] < array[j]) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
  }
  return;
}

void uniq(int num, int *array, int *alp) {
  int i, j;
  int arraynum = 1;
  alp[0] = array[0];
  for (i = 0; i < num; i++) {
    for (j = arraynum; j < num; j++) {
      if(alp[i] == array[j]) {
        // nothing
      } else {
        alp[i+1] = array[j];
        arraynum = j+1;
        break;
      }
    }
  }
  return;
}

void GetPrime(int num, int max,int *prime1, int *prime2) {
  int i;
  for(i=2;i<max;i++){

    if((num%i) == 0) {
        *prime1 = i;
        break;
    }
  }
  *prime2 = num / *prime1;
  return;
}

int main(void){
  int q, rmax, cmax; //INPUT
	int ri, cj, i, j, k, rx, cy;
  int cell_max;
	int rc[20][20] = {0};

	scanf("%d",&q);
	for(i=0; i<q; i++) {
    scanf("%d", &rmax);
    scanf("%d", &cmax);
    // clear
    clearBox(rc);

    cell_max = rmax * cmax;
    rx = 0;
    cy = 0;
    if(rmax == 2 & cmax == 2) {
      printf("Case #%d: IMPOSSIBLE\n", i+1);
      continue;
    } else {
      printf("Case #%d: POSSIBLE\n", i+1);
    }
    for (j = 0; j < cell_max; j++) {
      if(j == 0) {
        printf("1 1\n");
        rc[0][0] = 1;
        continue;
      }
      if(j < cell_max - 1) {
        // printf("j = %d\n",j);
        for (k = 1; k < (cell_max - 1); k++) {
          // printf("k = %d\n",k);
          for (ri = 0; ri < rmax; ri++) {
            if(ri == rx) {
              continue;
            }
            for (cj = 0; cj < cmax; cj++) {
              if(cj == cy) {
                continue;
              }
              if((ri - cj) == (rx - cy)) {
                continue;
              }
              if((ri + cj) == (rx + cy)) {
                continue;
              }
              if (rc[ri][cj] == 0) {
                rx = ri;
                cy = cj;
                rc[rx][cy] = 1;
                printf("%d %d\n", rx+1, cy+1);
                break;
              }
            }
          }
        }
      }
      if(j == (cell_max - 1) ) {
        for (ri = 0; ri < rmax; ri++) {
          for (cj = 0; cj < cmax; cj++) {
            if (rc[ri][cj] == 0) {
              rx = ri;
              cy = cj;
              rc[rx][cy] = 1;
              printf("%d %d\n", rx+1, cy+1);
              break;
            }
          }
        }
      }
    }
		(void)getchar();
	}
	return 0;
}
