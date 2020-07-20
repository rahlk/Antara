#include<stdio.h>
#include<math.h>
int main()
{
	int j,t,n,k,m,l,a[100];
	scanf("%d",&t);
	for(l=0;l<t;l++){
	    int i=0,b=0;
		scanf("%d",&n);
		k=n;
		while(n>0){
			m=n%10;
			if(m==4) a[i]=3;
			else a[i]=m;
			n/=10;
			i++;
		}
		for(j=0;j<i;j++){
			b=b+(pow(10,j)*a[j]);
		}
		printf("Case #%d: %d %d\n",l+1,b,k-b);
	}
}
