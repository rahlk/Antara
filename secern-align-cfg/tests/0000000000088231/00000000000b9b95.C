#include<stdio.h>
#include<math.h>
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
long long int sep(long long int x){
	long long int c=0,s=0;
	while(x>0){
		if(x%10==4){
			s=s+pow(10,c);
		}
		x=x/10;
		c++;
	}
	return s;
}
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,x,y;
		scanf("%lld",&n);
		if(n%2!=0){
			x=(n/2)+1;
			y=n/2;
			for(int i=1;i<=1000000000;i++){
			     if(istr(x+i)==0&&istr(y-i)==0){
			    	x=x+i;
			    	y=y-i;
			    	break;
				}
			}
			printf("%lld %lld\n",x+sep(x),y-sep(y));
		}
		if(n%2==0){
			x=(n/2);
			y=n/2;
				printf("%lld %lld\n",x+sep(x),y-sep(y));
		}
	}
}