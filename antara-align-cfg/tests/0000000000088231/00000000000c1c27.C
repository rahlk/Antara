#include <stdio.h>
#include <stdlib.h>

void main(){
    int A,B,tmp,katsayi,i;
    long int N;
    scanf("%d",&T);
    for(i=0 ; i<T ;i++){
        B=0;
        scanf("%d",&N);
        tmp=N;
        katsayi=1;
        while(tmp>0){
            if((tmp % 10) == 4)
                B+=2*katsayi;
            tmp/=10;
            katsayi*=10;
        }
        A=N-B;
        printf("Case #%d: %d %d",i+1,A,B);

    }
}
