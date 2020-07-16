#include <stdio.h>
int check_four(long long int n){
    long long int number,i;
    number = n;
    while(number>0){
        if(number%10 == 4 || number/10 == 4)
            return 0;
        number /= 10;
    }
    return 1;
}
int main() {
	long long int n,i,test,Case=1;
	scanf("%lld",&test);
	while(Case<=test){
	scanf("%lld",&n);
	for(i=1;i<=n/2;i++){
	    if(check_four(i) && check_four(n-i)){
	        printf("Case #%lld: %lld %lld\n",Case,i,n-i);
	        break;
	    }
	}
	Case++;
	}
	return 0;
}