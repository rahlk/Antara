#include<stdio.h>
#include<math.h>
long long int nod(long long int n){
	
	int cou=0;
	long long int m;
	long long int j=n;
	//long long int j1=n
	while(n>0){
		
		m=n%10;
		
		if(m==4)
			j=j-pow(10,cou);
		n/=10;
	//	printf("m:%lld n:%lld cou:%d j:%lld\n",m,n,cou,j);
		cou++;
	}
	return j;
}
int main(){
	
	int t;
	long long int n;
	scanf("%d",&t);
	int i=1;
	while(i<=t){
		
		scanf("%lld",&n);
		long long int A=nod(n);
		long long int B=n-A;;
		printf("Case #%d: %lld %lld\n",i,A,B);
		i++;
	}
}