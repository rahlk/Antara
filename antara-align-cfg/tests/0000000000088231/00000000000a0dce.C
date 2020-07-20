#include<stdio.h>
int main()
{
	int t,i;
	int n,a,b,j;


	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);	
		a=0;
		b=0;
		for(j=0;j<=n;j++)
		{
			a=a+1;
			b=b+1;
		    
		    if(a+b==n)break;
		    
		    
	}
		
		printf("Case #%d: %d %d",i,a,b);
	}
}