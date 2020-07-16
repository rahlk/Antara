#include<stdio.h>
int main()
{
	int t,n,d,j;
	scanf ("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		d=n/4;
		j=n-d;
		printf("case #%d: %d %d",i+1,d,j);
		break;
	}
	return 0;
}