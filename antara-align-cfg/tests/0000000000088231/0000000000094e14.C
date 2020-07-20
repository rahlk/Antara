#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	int a[t];
	int b[t];
	int c[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++)
	{
		int div = a[i]/4;
		b[i]=div;
		c[i]=a[i]-div;
	}
	for(i=0;i<t;i++)
	{
		printf("%d %d\n", b[i],c[i]);
	}
	return 0;
}