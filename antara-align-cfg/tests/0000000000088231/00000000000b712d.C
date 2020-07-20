#include <stdio.h>

int isDigit4(long n){
    while(n){
        if(n%10 == 4){
            return 1;
        }
        n = n/10;
    }
    return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	long long n;
	long long lo,hi;
	int c;
	for(c = 1;c<=t;c++){
	    scanf("%lld",&n);
	    lo = 1;
	    hi = n-1;
	    for(;lo <= hi;){
	       
	        if((isDigit4(lo) == 0) && (isDigit4(hi) == 0) && (lo+hi) == n){
	            break;
	        }
	        else if((lo+hi) > n){
	            hi--;
	        }
	        else{
	            lo++;
	        }
	    }
	    printf("%s%d%s%lld%s%lld\n","Case #",c,": ",lo," ",hi);
	}
	return 0;
}
