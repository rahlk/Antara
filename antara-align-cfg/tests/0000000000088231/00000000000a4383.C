#include<stdio.h>
int main()
{
	int t,i;
	int n,a,b,j;


	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);	
		a=4;
		b=0;
		for(j=0;j<=n;j++)
		{
		
			
		    if(a!=b)
		    if(a+b==n)break;
		    else
		    b=b+1;
		    
	}
		
		printf("Case #%d: %d %d\n",i,a,b);
	}
}