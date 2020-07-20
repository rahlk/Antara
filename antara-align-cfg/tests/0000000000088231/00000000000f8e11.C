#include<stdio.h>
int main(void){
	int N,i,d,e,g;
	scanf("%d",&N);
	int a[N],b[N],c[N];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(i=0;i<N;i++){
		d=a[i];
		g=1;
		while(d!=0){
			e=d%10;
			if(e==4){
			b[i]=b[i]+g;
			}
				g=g*10;
			d=d/10;	
		}	
	}
	for(i=0;i<N;i++){
		c[i]=a[i]-b[i];
	}
	for(i=0;i<N;i++){
		printf("Case #%d: %d %d\n",i+1,c[i],b[i]);
	}
	return(0);
}