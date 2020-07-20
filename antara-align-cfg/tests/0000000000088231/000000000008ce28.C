#include<stdio.h>
int main(){
	int n,i,len,n1,c,a,b,k,t,cas=0;
	scanf("%d",&t);
	while(t--){
		cas++;
		len=0;
		a=0;
		b=0;
		c=1;
		scanf("%d",&n);
		n1=n;
		while(n1>0){
			len=len+1;
			n1/=10;
		}
		int *p=(int*)malloc(sizeof(int)*len);
		int *q=(int*)malloc(sizeof(int)*len);
		int *diff=(int*)malloc(sizeof(int)*len);
		i=len-1;
		while(n>0){
			k=n%10;
			p[i]=k;
			if(k==4){
				q[i]=1;
			}
			else{
				q[i]=0;
			}
			n=n/10;
			i--;
		}
		for(i=len-1;i>=0;i--){
			diff[i]=p[i]-q[i];
		}
		for(i=len-1;i>=0;i--,c*=10){
			a+=c*diff[i];
			b+=c*q[i];
		}
		printf("case #%d: %d %d",cas,a,b);
		printf("\n");
	}
}