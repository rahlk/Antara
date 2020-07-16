#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i;
	long d1,a1,a2;
	long tmp,r,q,m;
	
	scanf(" %d",&n);
	for(i=1;i<=n;++i){
		scanf(" %ld",&d1);
		a1=0; a2=0;
		m=1;
		tmp=d1;
		while(tmp!=0){
			r=tmp%10;
			tmp=tmp/10;
			if(r!=4){
				a1=a1+r*m;
				m=m*10;
			}
			else{
				a1=a1+2*m;
				a2=a2+2*m;
				m=m*10;
			}
		}
		printf("case #%d: %ld %ld\n",i,a1,a2);
	}
	return(0);
}