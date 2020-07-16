#include<stdio.h>
#define ll long long int
int main(){
    ll t, i;
    scanf("%lld",&t);
    for(i=1; i<=t; i++){
        ll n,a,b,c;
        a = 0;
        c = 1;
        scanf("%lld", &n);
	    b = n;
        while(n){
            if(n%10==4){
                b -= c;
                a += c;
            }
            c*=10;
            n=n/10;
        }
        printf("Case #%lld: ", i);
        printf("%lld %lld \n", a, b);
    }
    return(0);
}
