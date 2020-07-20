#include <stdio.h>
#include<math.h>

int check(long long int n){
    long long int i=n;
    int r;
    while(i!=0){
        r=i%10;
        if(r==4)return 0;
        i=i/10;
    }
    return 1;
}
int main(void) {
	// your code goes here
	long long int t;
	scanf("%lld",&t);
	long long i;
	
	for(i=0;i<t;i++){
	    long long int n;
	    scanf("%lld",&n);
	    long long int a=n/2;
	    long long int b=n-a;
	   
          while((!check(a))||(!check(b))){
             
            a=a+1;
            b=b-1;
        }
        printf("Case #%lld:%lld %lld\n",i+1,a,b);
	}
	return 0;
}