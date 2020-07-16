#include<stdio.h>
int main(){
	
	int T,i,count,j;
	long long N,P,x;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		count=0;
		x=0;
		j=0;
		scanf("%lld",&N);
		P=N;
		while(P!=0){
				P=P/10;
				count++;
			}
		
		int a[count];
		int b[count];
		P=N;
		for(j=count-1;j>=0;j--){
			if((P%10)!=4){
				a[j]=P%10;
				b[j]=0;
				P=P/10;
			}
			else{
				a[j]=(P%10)/2;
				b[j]=2;
				P=P/10;
			}
		}
		j=0;
		while(j<count){
			x=x*10+b[j];
			j++;
		}
		printf("Case #%d: %lld %lld\n",i,(N-x),x);
	}
	
	return 0;
}