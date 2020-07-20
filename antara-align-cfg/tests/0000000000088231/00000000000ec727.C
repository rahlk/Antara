#include<stdio.h>
int main(){
    long int t,n,c,a,i,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++){
        scanf("%ld",&n);
        a=n;
        for(j=n,c=1; j!=0; j/=10,c*=10){
            if(j%10==4) a-=(3*c);
        }
        printf("Case #%ld: %ld %ld\n",(i+1),a,(n-a));
    }
    return 0;
}            