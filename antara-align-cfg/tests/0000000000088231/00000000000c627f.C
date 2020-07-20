#include<stdio.h>
int pov(int);
void ans(int);
void main()
{
	int t,n,o,m,j,rem;
	scanf("%d",&t);
	for (j=1;j<=t;j++);
	{
		scanf("%d",&n);
		m=n;
		o=0;
		while(m>0)
		{
			rem=m%10;
			if(rem==4)
			o++;
			m/=10;
		}
		if(o!=0)
		{
			printf("CASE# %d\t",j);
			ans(n);
		}
	}
}
void ans(int n)
{
	int k,a,b=0,c,d,i,rev=0,rem,arr[10],f;
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
            k=pov(i);    			
            b=b+k;
		}
	}
	for(i=0;arr[i]==0;i++)
	{
		rem=arr[i];
		a=(a*10)+rem;
	}
	printf("%d\t%d",a,b);
}
int pov(int x)
{
    int y=1;
    for(int j=1; j<=x; j++)
    {
        y=y*10;
    }
    return y;
}