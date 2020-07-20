#include<stdio.h>
long long int istr(long long int x){
	long long int c=0;
	while(x>0){
		if(x%10==4){
			c=1;
			break;
		}
		x=x/10;
	}
	if(c==1)
	return 1;
	else{
		return 0;
	}
}
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,x,y,i;
		scanf("%lld",&n);
		for(i=1;i<=n;i++){
			if(istr(i)==0&&istr(n-i)==0){
				x=i;
				y=n-i;
				break;
			}
		}
		printf("%lld %lld\n",x,y);
	}
}