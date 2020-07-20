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


for(i = 0;i < T;i++){
  r1 = x[i];
  ar = r1%10;
  A[i] = x[i];
  B[i] = 0;
  while((r1>0)&&(r2>0)){
      if(ar=4){
          A[i]--;
          B[i]++;
        }else{
          if(ar2=4){
              A[i]++;
              B[i]--;
        }
  r1 = A[i]/10;
  ar = r1%10;
  r2 = B[i];
  ar2 = r2%10;
}


printf("Case #%d: %d %d\n",i+1,A[i],B[i]);

}
}

free(x);
return 0;
 }