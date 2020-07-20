#include <stdio.h>
#include <stdlib.h>

void main(){
    int A,B,tmp,katsayi;
    long int N,i;
    scanf("%d",&N);
    for(i=0 ; i<N ;i++){
        B=0;
        scanf("%d",&A);
        tmp=A;
        katsayi=1;
        while(tmp>0){
            if((tmp % 10) == 4)
                B+=2*katsayi;
            tmp/=10;
            katsayi*=10;
        }
        A=A-B;
        printf("Case #%d: %d %d\n",i+1,A,B);

    }
}
