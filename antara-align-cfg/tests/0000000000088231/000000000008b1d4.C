#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int howbig(int N){
    int res=0;
    while(N!=0){
        N=N/10;
        res++;
    }
    return res;
}

void result(int N,int noDigits, int* ab){       
    ab[0]=N; ab[1]=0;
    int i,c;
    for(i=0;i<noDigits;i++){
      c=N%10;
      N=N/10;
      if(c==4){
        ab[0]=ab[0]-pow(10,i);
        ab[1]=ab[1]+pow(10,i);
      }
    }
    
}

int main(){
    int x;
    scanf("%d",&x);
    int i;
    int* N=(int*)malloc(x*sizeof(int));
    for(i=0;i<x;i++){
        scanf("%d",&N[i]);
    }
    int* ab=(int*)malloc(2*sizeof(int));
    int noDigits;
    for(i=0;i<x;i++){
        noDigits=howbig(N[i]);
        result(N[i],noDigits,ab);
        printf("Case #%d: %d %d\n",i+1,ab[0],ab[1]);
    }
    return 0;
}