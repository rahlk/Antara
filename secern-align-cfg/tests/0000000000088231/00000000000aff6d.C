#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int t,i=1;
	scanf("%d",&t);
while(t!=0)
{
	long long int n,temp,res1,res2;
	int r,c=0,p;
	scanf("%lld",&n);
	temp=n;
	res1=n;
	while(temp!=0)
	{
		r=temp%10;
		if(r==4)
		{
			p=c;
			res1=res1-pow(10,p);
		}

		c++;
		temp=temp/10;
	}

	res2=n-res1;
printf("\nCase #%d: %d %d",i,res1,res2);
i++;
	t--;
}
}
