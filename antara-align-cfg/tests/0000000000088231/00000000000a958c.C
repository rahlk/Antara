#include<stdio.h>
int main(){
	int T,N,i,j, a,b,c,d,e;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&N);
		a=1;b=N-1;
		while(1){
		c=a,d=b,e=b;
		if(a%10==4){
			a=a+1;
			b=b-1;
		}
		else{
			for(j=0;j<b;j++){
				if(b%10==4){
					a=a+1;
					e=N-a;
					break;
				}
				b=b/10;
			}
		}
		b=e;
		if(d==b)	break;
		
	}
	printf("Case #%d: ",i);
	printf("%d %d",a,b);
}
}