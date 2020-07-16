#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10001

int main(){
  int t, n ,k;
  int l, r;
  int i, j;
  int max_c, max_d;
  int fair_count;

  int* c;
  int* d;

  c = malloc(MAX_N*sizeof(int));
  d = malloc(MAX_N*sizeof(int));

  scanf("%d", &t);
  for(i = 0; i < t; i++){
    fair_count = 0;
    scanf("%d %d", &n, &k);
    for(j = 0; j < n; j++){
      scanf("%d", &c[j]);
    }
    for(j = 0; j < n; j++){
      scanf("%d", &d[j]);
    }

    for(l = 0; l < n; l++){
      max_c = c[l];
      max_d = d[l];
      for(r = l; r < n; r++){
        if(max_c < c[r]) max_c = c[r];
        if(max_d < d[r]) max_d = d[r];
        if(abs(max_c - max_d) <= k) fair_count++;
      }
    }

    printf("Case #%d: %d\n", i+1, fair_count);

  }
  return 0;
}
