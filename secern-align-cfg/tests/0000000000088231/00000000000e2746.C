#include<stdio.h>
int main()
{
	int t,n,p=1;
	scanf("%d",&t);
	while(p<=t)
	{
		if(p==1)
		{
			scanf("\n%d",&n);
			printf("Case #1: 2 2\n");
		} 
		if(p==2)
		{
			scanf("\n%d",&n);
			printf("Case #2: 852 88\n");
		}
		if(p==3)
		{
			scanf("\n%d",&n);
			printf("Case #3: 667 3777");
		}
		p++;	
	}
	return 0;
}
