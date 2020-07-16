#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int N,m,n,p=2;
        scanf("%d",&N);
        m = N%p;
        if(m==0){
            printf("Case #%d:%d %d",i+1,N/2,N/2);
        }
        
    }
}

