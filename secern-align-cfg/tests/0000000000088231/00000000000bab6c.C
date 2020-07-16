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
			while(istr(x)==1&&istr(y)==1){
				x=x+sep(x);
				y=y-sep(y);
			}
			while(istr(x)==1){
				y=y-sep(x);
				x=x+sep(x);
			}
			while(istr(y)==1){
				x=x+sep(y);
				y=y-sep(y);
			}
			printf("%lld %lld\n",x,y);
		}
		if(n%2==0){
			x=(n/2);
			y=n/2;
				printf("%lld %lld\n",x+sep(x),y-sep(y));
		}
	}
}