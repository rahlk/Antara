#include<stdio.h>
#include<math.h>
int main(void){
    long N,T;
    scanf("%lu",&T);
    for(int i=0;i<T;i++){
        scanf("%lu",&N);
        long x,s=0;
        long j=0;
        long u=N;
        while(u!=0){
            x=u%10;
            u=u/10;
            if(x==4)
            s+=pow(10,j);
            j++;
        }
        printf("Case #%lu: %lu %lu\n",i+1,s,N-s);
    }
}