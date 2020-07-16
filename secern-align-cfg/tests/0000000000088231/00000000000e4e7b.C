#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,num,k,l,p,t;
	scanf("%lld",&t);
	for(p=1;p<=t;p++){
		scanf("%lld",&num);
			k=(num/4);
			l=num-k;
			printf("Case #%lld: %lld %lld\n",p,k,l);
	}
return 0;
}