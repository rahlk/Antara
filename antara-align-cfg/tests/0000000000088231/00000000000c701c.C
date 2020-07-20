#include<stdio.h>
int pov(int);
void ans(int);
void main()
{
	int t,n,i,r;
	scanf("%d",&t);
	for (i=0;i<t;i++);
	{
		scanf("%d",&n);
        printf("CASE#%d\t",i+1);
        ans(n);
	}
}
void ans(int n)
{
	int a,c,d,i,rev=0,rem,arr[10],f;
	f=n;
	while(f>0)
	{
		rem=f%10;
		rev=(rev*10)+rem;
		f/=10;
	}
	for(i=0;rev>0;i++)
	{
		rem=rev%10;
		arr[i]=rem;
		rev/=10;
	}
	for(i=0;arr[i]==0;i++)
	{
		if (arr[i]==4)
		{
			arr[i]=arr[i]-1;
		}
	}
	for(i=0;arr[i]==0;i++)
	{
		rem=arr[i];
		a=(a*10)+rem;
	}
	printf("%d\t%d",a,n-a);
}
