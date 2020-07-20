#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int t;
    long long int n,a,b,p;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        a=0;
        b=0;
        scanf("%lld", &n);
        p=n;
        for(int k=10; 1; k=k*10){
            if((n%k)-(n%(k/10))==4*k/10){
                b=b+(2*k/10);
            }
	    if((n-(n%k))==0){
		break;
	    }
        }
        a=n-b;
        printf("\nCase #%d: %lli %lli", i+1, a, b);
    }
    return 0;
}