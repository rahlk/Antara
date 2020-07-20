#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int t;
    long long int n,a,b;
    scanf("%d",t);
    for(int i=0; i<t; i++){
        a=0;
        b=0;
        scanf("%lld", n);
        for(int k=10; (n-(n%k))!=0; k=k*10){
            if((n%k)-(n%(k/10))==4*k/10){
                b=b+(2*k/10);
            }
        }
        a=n-b;
        printf("Case #%d: %d %d\n", t+1,a, b);
    }
    return 0;
}