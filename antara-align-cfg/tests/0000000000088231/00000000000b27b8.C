#include<stdio.h>
#include<stdbool.h>
bool check(int d){
    int x,y;
    y=d;
    while(y!=0)
    {x=y%10;
    y/=10;
    if(x==4)
    return false;
    }
    return true;
}
int main(void){
  long N,A,B;
  int T;
  scanf("%d",&T);
  for(int i=0;i<T;i++){
   scanf("%lu",&N);
   A=N;B=0;
    for(int j=1;j<N/2;j++){
        A--;
        B++;
        if(check(A)&&check(B))
        {printf("Case #%d: %lu %lu\n",i+1,A,B);
        break;}
    }
  }
}