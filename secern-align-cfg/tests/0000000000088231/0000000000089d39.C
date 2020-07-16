#include <stdio.h>
#include <string.h>

int pow(n){
    int i=0;
    int result=1;
    for(int i=0;i<n;i++){
        result *=10;
    }
    return(result);
}
int main(){
    char T;
    scanf("%c",&T);
    char i=0;
    for(i=0;i<T;i++){
        unsigned int N;
        scanf("%d",N);
        unsigned int currentpow=1;
        unsigned int tempN=N;
        while(N>0){
            char remaider=N%10;
            if(remaider==4){
                cnt += currentpow;
            }
            currentpow *=10;
            N -=remaider;
            N /=10;
        }
    printf("Case #%c: %d %d",i+1,cnt,tempN-cnt);  
    }
}