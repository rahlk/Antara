#include<stdio.h>
int pov(int);
void ans(int);
int main()
{
	int t,n,j,r;
	scanf("%d",&t);
	j=0;
	while(j<t)
	{
		scanf("%d",&n);
        printf("CASE\t#%d:\t",(j+1));
        ans(n);
	    j++;
	}
}
void ans(int n)
{
	int a=0,i,rev=0,rem=0,f;
	f=n;
	while(f>0)
	{
		rem=f%10;
		if (rem==4)
		{
		    rem=3;
		}
		rev=(rev*10)+rem;
		f/=10;
	}
	for(i=0;rev>0;i++)
	{
		rem=rev%10;
		a=(a*10)+rem;
		rev/=10;
	}
	
	printf("%d\t%d\n",a,n-a);
    return 0;
}
