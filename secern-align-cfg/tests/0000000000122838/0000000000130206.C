#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	int t,count=1;
	scanf("%d",&t);
	while(t--){
		long int n,k,N;
		scanf("%ld %ld",&n,&k);
		long int c[n],d[n],i;
		for(i=0;i<n;i++) scanf("%ld",&c[i]);
		for(i=0;i<n;i++) scanf("%ld",&d[i]);
		long int cs=0,j=0;
		N=n;
		for(i=0;i<n;i++){
			if(abs(c[i]-d[i])==k){
				cs += N+j*N-j*j-j;
				N = n-i-1;
				j=-1;
			}
			j++;
		}		
		printf("Case #%d: %ld\n",count,cs);
		count++;
	}
	return 0;
}