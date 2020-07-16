#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	long int ar[a],i,j;
	char str[a][100000];
	for(i=1;i<=a;i++)
	{
		scanf("%ld",&ar[i]);
		scanf("%s",&str[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<ar[i]*2-2;j++)
		{
			if(str[i][j]=='S')
			str[i][j]='E';
			else
			str[i][j]='S';
		}
	}
	for(i=1;i<=a;i++)
	{
		printf("Case #%d: %s",ar[i],str[i]);
	}
	return 0;
}
