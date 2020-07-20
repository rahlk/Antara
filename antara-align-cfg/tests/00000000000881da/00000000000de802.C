#include<stdio.h>
void main()
{
	int t,n;
	scanf("%d",&t);
	for(int l=0;l<t;l++)
	{
		scanf("%d",&n);
		char a[2*n-2];
		for(int i=0;i<2*n-2;i++)
		{
			scanf("%c",&a[i]);
		}
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
	