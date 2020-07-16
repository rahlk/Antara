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

void clearLine(int *box) {
  int i;
  int count = 20;
  for (i = 0; i < count; i++) {
    box[i] = 0;
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
	int ri, cj, i, j, k, p, s, rx, cy;
  int rsi, csj, rcsk;
  int ok;
  int cell_max;
	int rc[20][20] = {0};
  int r[20] = {0};
  int c[20] = {0};

	scanf("%d",&q);
	for(i=0; i<q; i++) {
    scanf("%d", &rmax);
    scanf("%d", &cmax);
    // clear
    clearBox(rc);

    cell_max = rmax * cmax;

    if(rmax == 2 & cmax == 2) {
      printf("Case #%d: IMPOSSIBLE\n", i+1);
      continue;
    }

    for (rcsk = 0; rcsk < cell_max; rcsk++) {
      for(rsi = 0; rsi < rmax; rsi++){
        for(csj = 0; csj < cmax; csj++){
          rx = rsi;
          cy = csj;
          clearBox(rc);
          clearLine(r);
          clearLine(c);
          ok = 1;

          for (j = 0; j < cell_max; j++) {
            if(j == 0) {
              r[j] = rx;
              c[j] = cy;
              rc[rx][cy] = 1;
              continue;
            }
            if(j < cell_max - 1) {
              for (k = 1; k < (cell_max - 1); k++) { //k回目のジャンプ
                for (ri = 0; ri < rmax; ri++) { //次の飛び先を探す
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
                      r[k] = rx;
                      c[k] = cy;
                      ok = 1;
                      if(k == (cell_max / 2)) {
                        goto trueans;
                      }
                      break;
                    }
                  }
                }
                if(ok == 0) {
                  // 次のジャンプはしない
                  goto nextloop;
                } else if(k < cell_max - 1) {
                  ok = 0;
                }
              }
            }
            if(j == (cell_max - 1) ) {
              for (ri = 0; ri < rmax; ri++) {
                for (cj = 0; cj < cmax; cj++) {
                  if (rc[ri][cj] == 0) {
                    rx = ri;
                    cy = cj;
                    r[rmax-1] = rx;
                    c[cmax-1] = cy;
                    rc[rx][cy] = 1;
                    break;
                  }
                }
              }
            }
          }
trueans:
          printf("Case #%d: POSSIBLE\n", i+1);
          for (p = 0; p < rmax; p++) {
            for (s = 0; s < cmax; s++) {
              printf("%d %d\n", (r[p]+1), (c[s]+1));
            }
          }
          goto loopend;
nextloop:
          ok += 0;
        }
      }
    }
    if(ok == 0) {
      printf("Case #%d: IMPOSSIBLE\n", i+1);
    } else {
      ok = 0;
    }
loopend:
		(void)getchar();
	}
	return 0;
}
