#include <stdio.h>

int main(){
    int tests;
    long long int n,a,b;
    if(scanf("%d",&tests)){}
    for(int i = 1; i <= tests; i++){
        if(scanf("%llu",&n)){}
        if(n%10==7){
            a = (n/2)-1;
            b = (n/2)+2;
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
        else if(n%10==9){
            a = (n/2)-1;
            b = (n/2)+2;
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
        else if(n%2==1){
            a = n/2;
            b = (n/2)+1;
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
        else if(n%2==0){
            a = n/2;
            b = n/2;
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
    }
    return 0;
}