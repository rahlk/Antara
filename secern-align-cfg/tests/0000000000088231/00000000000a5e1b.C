#include <stdio.h>

int checkfour(long int l, long int r){
    long int x=10;
    while(l!=0 || r!=0){
        if(l%x==4 || r%x==4)
            return 0;
        x=x*10;
        l=l/10;r=r/10;
    }
    return 1;
}

int main(){
    int T;
    long int N,l,r;
    scanf("%d",&T);
    
    for(int i = 0 ;i< T; i++ ){
        scanf("%ld",&N);
        l = N;
        r = 0;
        while(l!=r){
            if(checkfour(l,r))
                break;
            l--;r++;
        }
        printf("Case #1: %ld %ld",l,r);
    }
    
}