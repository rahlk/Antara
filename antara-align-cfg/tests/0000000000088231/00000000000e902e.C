#include <stdio.h>

int c[100][2];
long int d;

long int resp(int N, int i){
  long int n;
  n=N;
  if(d==0){
    return 1;
  }

  if(((n%(d*10))/d)==4){
    c[i][1]=c[i][1]+(3*d);
  }
  d/=10;
  resp(N, i);
}

int main(){
  int t, i, a, b;
  long int N;
  
  scanf("%d", &t);

  for(i=0;i<t;i++){
    d=1000000000;
    scanf("%ld", &N);
    c[i][0]=N;
    resp(N, i);
  }

  for(i=0;i<t;i++){
    a=c[i][0]-c[i][1];
    b=c[i][1];
    printf("Case #%d: %d %d\n", i, a, b);
  }
}