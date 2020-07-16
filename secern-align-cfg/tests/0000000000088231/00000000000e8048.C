#include<stdio.h>
int ispres(unsigned long long int f)
{
	while(f>0)
	{
		if(f%10==4)
		return 0;
		f/=10;
	}
	return 1;
}
int main()
{
	int a,i,j;
	unsigned long long int x[100],y[100][2];
	printf("ENTER THE NUMBER OF CASES");
	scanf("%d",&a);
	for(i=0;i<a;i++)
		scanf("%llu",&x[i]);
	for(i=0;i<a;i++)
	{
		for(j=1;j<=x[i];j++)
	{
		if(ispres(j) && ispres(x[i]-j))
		{
			y[i][0]=j;
			y[i][1]=x[i]-j;
		}
	}
	}
	for(i=0;i<a;i++)
		printf("\nCase #%d: %llu %llu",i,y[i][0],y[i][1]);
	return 0;
}