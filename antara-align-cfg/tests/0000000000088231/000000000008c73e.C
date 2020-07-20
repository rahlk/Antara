#include <stdio.h>
#include <string.h>

int main(){
    char T;
    scanf("%c",&T);
    char i=0;
    for(i=0;i<T;i++){
        unsigned int N;
        scanf("%d",&N);
        unsigned int currentpow=1;
        unsigned int tempN=N;
        int cnt=0;
        while(N>0){
            char remaider=N%10;
            if(remaider==4){
                cnt += currentpow;
            }
            currentpow *=10;
            N -=remaider;
            N /=10;
        }
    printf("Case #%c: %d %d\n",i+1,cnt,tempN-cnt);  
    }
}