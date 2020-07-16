#include<stdio.h>
#include<math.h>
long long int isnum(long long int num){
	int temp,rem;
	temp=0;
	while(num>0){
		rem=num%10;
		if(rem==4)
			temp=temp*10+2;
		else
			temp=temp*10+rem;


		num/=10;
	}
return temp;	
}
int main()
{
	long long int i,num,k,l,p,t,ans;
	scanf("%lld",&t);
	for(p=1;p<=t;p++){
		scanf("%lld",&num);
		k=isnum(num);
		l=num-k;
		printf("Case #%lld: %lld %lld\n",p,k,l);
	}
return 0;
}