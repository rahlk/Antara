#include <stdio.h>

int main(){
    int tests,n,a,b;
    scanf("%d",&tests);
    for(int i = 1; i <= tests; i++){
        scanf("%d",&n);
        if(n%2==1){
            a = n/2;
            b = (n/2)+1;
            printf("Case #%d: %d %d\n",i,a,b);
        }
        if(n%2==0){
            a = n/2;
            b = n/2;
            printf("Case #%d: %d %d\n",i,a,b);
        }
    }
    return 1;
}