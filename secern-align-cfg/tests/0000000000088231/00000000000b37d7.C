#include <stdio.h>
int checkfour(long long int n){
	int t;
	while(n > 0){
		t = n % 10;
		n = n/10;
		if(t==4){
			return 1;
		}
	}
	return 0;
}
int main(void) {
	int t;
	int i = 1;
	long long int n,l,r;
	scanf("%d",&t);
	while(t-- > 0){
		scanf("%lld",&n);
		l = 0;
		r = n;
		
		while(l <= r){
		    	if(l+r > n)
		    		r--;
		    	else
		    		l++;
		    	if(!checkfour(l) && !checkfour(r) && l+r == n){
					printf("Case #%d: %lld %lld\n",i,l,r);
					break;
		    	}
		}
		i++;
	}
	return 0;
}
