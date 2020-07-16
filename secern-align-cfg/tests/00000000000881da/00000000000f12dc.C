#include <stdio.h>
int main()
{
	int i,j,k,n,t;
	scanf("%d",&t);
	int a[t];
	char b[2*t][100000];
	for(i=0;i<t;i++)
	{
		scanf("%d%s",&a[i],&b[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("Case #%d: ",i+1);
		for(j=0;j<2*a[i]-2;j++)
		{
			if(b[i][j]=='E')
			printf("S");
			else
			printf("E");
		}
		printf("\n");
	}
}