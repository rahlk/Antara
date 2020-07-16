#include<stdio.h>
#include<stdlib.h>

int main(){
//--------------------------------//
int T;//number of cases
int N;
int i;

int *A;
int *B;
int ar;
int r1;
int r2;
int ar2;
int ar3;
int r3;
int *count;
int j;
//--------------------------------//


scanf("%d",&T);
int *x;
x = calloc(T,sizeof(int));
for(i = 0;i < T;i++){
    scanf("%d",&N);
    x[i] = N;
}

B = calloc(T,sizeof(int));
A = calloc(T,sizeof(int));
int *y;
y = calloc(T,sizeof(int));
count = calloc(T,sizeof(int));
for(i = 0;i < T;i++){
  y[i] = x[i];
  while(y[i] != 0)
    {

        y[i] /= 10;
        ++count[i];
    }
}

for(i = 0;i < T;i++){
  A[i] = x[i] - (x[i]/4);
  B[i] = x[i]/4;
  ar = x[i];
  for(j = 0;j < count[i];j++){
    r1 = ar%10;
    if(r1=4){

      A[i]--;
      B[i]++;
    }
    ar = ar/10;
  }
  printf("Case #%d: %d %d\n",i+1,A[i],B[i]);
}








free(x);
return 0;
 }
