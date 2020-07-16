#include<stdio.h>
int valid(long long int n){
	
	long long int m;
	while(n>0){
		m=n%10;
		if(m==4)
			return 0;
		n/=10;
	}
	return 1;
}
int main(){
	
	int t;
	long long int n;
	scanf("%d",&t);
	int i=1;
	while(i<=t){
		
		scanf("%lld",&n);
		if(!valid(n)){
			long long int j;
		for(j=1;j<(n/2);j++){
			if(valid(j) && valid(n-j))
				break;
		}
			printf("Case #%d: %lld %lld\n",i,j,(n-j));
			
		}
		i++;
	}
}