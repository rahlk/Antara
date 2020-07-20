#include<stdio.h>
#include<math.h>
int T,N,i,j, a,b,c,d,e,f,g,cnt=0;
int main(){
	
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&N);
		f=N;
		while(f>0){
			f=f/10;
			cnt++;
		}
		a=pow(10,cnt-1);b=N-a;
		cnt=0;
		while(1){
		c=a,g=a,d=b,e=b;
		for(j=0;j<a;j++){
		
		if(a%10==4){
			g=c+1;
			b=N-g;
			break;
		}
		a=a/10;
	}
		a=g;
		for(j=0;j<b;j++){
				if(b%10==4){
					a=a+1;
					e=N-a;
					break;
				}
				b=b/10;
			}
		b=e;
		if(d==b && c==a)	break;
		
	}
	printf("Case #%d: ",i);
	printf("%d %d",a,b);
}
}