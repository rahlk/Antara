#include<stdio.h>
int valid(int n){
	
	int m;
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
		
		//int flag=0;
		scanf("%lld",&n);
		long long int j;
		for(j=1;j<n;j++){
			if(valid(j) && valid(n-j)){
				//flag=1;
				break;
			}
		}
		printf("Case#%d: %lld %lld\n",i,j,(n-j));
		i++;
	}
}