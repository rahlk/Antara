#include<stdio.h>
long long int isnum(long long int num){
	int temp;
	temp=num;
	while(num>0){
		if(num%10==4)
			return -1;

		num/=10;
	}
return temp;	
}
int main()
{
	long long int i,num,k,l,p,t;
	scanf("%lld",&t);
	for(p=1;p<=t;p++){
		scanf("%lld",&num);
		for(i=num-1;i>=0;i--){
			k=isnum(i);
			if(k==-1)
				continue;
			l=isnum(num-i);
			if(l==-1)
				continue;

			printf("Case #%lld: %lld %lld\n",p,k,l);
			break;
		}
	}
return 0;
}