#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int N,T,a,b,i,j,c,d,e,f;
	scanf("%d\n",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&N);
		a=int(N/2);
		b=N-a;
		
		while(1){
		c=a; d=b; f=a; e=b;
		for(j=0;j<a;j++){
				if(a%10==4){
					f=c+1;
					b=N-f;
					break;
				}
				a=a/10;
			}
			a=f;
		for(j=0;j<b;j++){
				if(b%10==4){
					a=a+1;
					e=N-a;
					break;
				}
				b=b/10;
			}
			b=e;
		if(a==c && b==d)	
			break;
	}
	printf("Case #%d: ",i);
	printf("%d %d\n",a,b);
}
}