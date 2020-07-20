#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void sort(int num, int *array) {
  int i, j;
  int tmp;
  for (i=0; i<num; ++i) {
    for (j=0; j<num; ++j) {
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
    int q, l, max, tmp, num[100]; //INPUT
	int i, j, k;
	int a1 = 0, a2 = 0;
	int tmp1 = 0, tmp2 = 0;
	int check, digit;
	int ansnum[101];
	int sortnum[101];
	int alpnum[26];
    char alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ans[102];
	int case_num = 0;

	scanf("%d",&q);
	for(i=0; i<q; i++) {
        scanf("%d",&max);
        scanf("%d", &l);
        for (j = 0; j < l; j++) {
            scanf("%d", &tmp);
            num[j] = tmp;
        }
        GetPrime(num[0], max, &a1, &a2);
        for(j = 0; j < l; j++) {
          if(num[j] % a1 == 0) {
              tmp1++;
          } else {
              break;
          }
        }
        for(j = 0; j < l; j++) {
           if(num[j] % a2 == 0) {
              tmp2++;
          } else {
              break;
          }
        }
        if(tmp1 > tmp2) {
            ansnum[0] = a2;
            ansnum[1] = a1;
        } else {
            ansnum[0] = a1;
            ansnum[1] = a2;
        }
        sortnum[0] = ansnum[0];
        sortnum[1] = ansnum[1];
        for(j = 1; j < l; j++) {
            if(ansnum[j] == 0) {
                // error!
            } else {
                ansnum[j+1] = num[j] / ansnum[j]; // alpは26、min input num は25
                sortnum[j+1] = ansnum[j+1];
            }
        }

        sort(l+1, sortnum);
        uniq(l+1, sortnum, alpnum);
        
        for(j=0;j<l+1;j++) {
            for(k=0;k<26;k++) {
                if(ansnum[j] == alpnum[k]) {
                    ans[j] = alp[k];
                    break;
                }
            }
        }
        ans[l+1] = '\0';
        
        // ans[l+1] = '\0';
        // printf("Case #%d: %s\n", i, ans[0]);
        printf("Case #%d: %s\n", i+1, ans);
		(void)getchar();
	}
	return 0;
}
