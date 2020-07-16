#include<stdio.h>
#include<stdlib.h>

int main(){
//--------------------------------//
int T;//number of cases
int N;
int i;

int A = 0;
int B = 0;
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

for(i = 0;i < T;i++){
  r1 = x[i];
  ar = r1%10;
  A = x[i];
  while(r1>0){
      if(ar=4){
          A--;
          B++;
        }
  r1 = r1/10;
  ar = r1%10;
}


printf("Case #%d: %d %d\n",i+1,A,B);
A = 0;
B = 0;
}


free(x);
return 0;
 }
