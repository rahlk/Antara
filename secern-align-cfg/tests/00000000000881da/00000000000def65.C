#include<stdio.h>
void main()
{
	int t,n;
	scanf("%d",&t);
	for(int l=0;l<t;l++)
	{
		scanf("%d",&n);
		char a[2*n-2];
		
			scanf("%s",a);
		
		for(int j=0;j<2*n-2;j++)
		{
			if(a[j]=='E')
			printf("S");
			if(a[j]=='S')
			printf("E");
		}
		printf("\n");
	}
}
	