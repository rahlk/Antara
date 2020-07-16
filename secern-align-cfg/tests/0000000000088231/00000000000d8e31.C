#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,r,j,k=0,c,d,q,i;
	scanf("%d",&n);
	int t[100],a[10000],b[10000];
	for(i=0;i<n;i=i+1){
		j=0;
		d=0;
		c=0;
		scanf("%d",&t[i]);
		while(t[i]>0){
			r=t[i]%10;
			a[j]=r;
			j=j+1;
			t[i]=t[i]/10;	
		}
		for(k=0;k<j;k=k+1){
			if(a[k]==4){
				a[k]=2;
				b[k]=2;
			}
			else{
				b[k]=0;
			}
		}
		for(q=j-1;q>=0;q=q-1){
			d=d*10+a[q];
			c=c*10+b[q];
		}
		printf("Case #%d: %d %d\n",i+1,d,c);
		
		
	}

}