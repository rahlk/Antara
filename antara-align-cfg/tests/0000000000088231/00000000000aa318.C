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
	    int n,no;
	    scanf("%d",&n);
	   no=n;
	    int c=0;
	    int d;
	    int count=1;
	    while(n>0){
	        d=n%10;
	        if(d==4) c=c+2*count;
	        else c=c+d*count;
	        n/=10;
	        count*=10;
	    }
	   
	    printf("Case #%d: %d %d\n",to-t,c,no-c);
	}
	return 0;
}