#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
	    int n,a,b;
	    scanf("%d",&n);
	    if(n%4==0){
	        a=n/2;
	        b=n/2;
	    }
	    else{
	        a=(n+1)*.5;
	        b=a-1;
	    }
	    printf("Case#%d: %d %d\n",x,a,b);
	     
	}
	return 0;
}

