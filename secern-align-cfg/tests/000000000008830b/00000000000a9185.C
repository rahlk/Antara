#include <stdio.h>
int digitcheck(int n){
    int d;
    while(n>0){
        d=n%10;
        if(d==4) return 0;
        n/=10;
    }
    return 1;
}
int main() {
	int t,to=0;
	scanf("%d",&t);
	to=t;
	while(t){
	    t--;
	    int n;
	    scanf("%d",&n);
	    int c=n/2;
	    while(1){
	        if(digitcheck(c) && digitcheck(n-c)) break;
	        c=c/2;
	    }
	    printf("Case #%d: %d %d\n",to-t,c,n-c);
	}
	return 0;
}