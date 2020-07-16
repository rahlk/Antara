#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
	    int n;
	    scanf("%d",&n);
	    int a=0;
	    int b=0;
	    int r=0;
	    int f=1;
	    while(n>0){
	        r=n%10;
	        if(r!=4){
	            a=f*r+a;
	        }
	        else{
	            a=f*3+a;
	            b=f*1+b;
	        }
	        f=f*10;
	        n=n/10;
	    }
	    printf("Case #%d: %d %d\n",k,a,b);
	}
	return 0;
}