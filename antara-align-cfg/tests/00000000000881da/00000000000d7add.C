#include<stdio.h>
#include<string.h>
int main()
{
	int m,t,n,i;
	
	scanf("%d",&t);
	
	for(m=0;m<t;m++)
	{
		scanf("%d",&n);
		n=2*n-2;
		//printf("n:%d \n",n);
		char a[n];
		
	    scanf("%s",a);
		//printf("%s\n",a);
		
		printf("Case #%d: ",m+1);
		for(i=0;i<n;i++)
		{
			if(a[i]=='E')
			{
				printf("S");
			}
			else
			{
				printf("E");
			}
		}		
		
		printf("\n");
		
	}
}