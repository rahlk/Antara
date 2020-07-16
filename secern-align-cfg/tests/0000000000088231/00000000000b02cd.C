#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,a,b,rem,i,j,k,count,n1;
	scanf("%d",&t);
	int ans[t][2];
	for(i=0;i<t;i++)
	{
		count=0;
		b=0;
		a=0;
		scanf("%d",&n);
		n1=n;
		while(n1!=0)
		{
			n1=n1/10;
			count++;
		}
		n1=n;
		for(j=0;j<count;j++)
		{
			rem=n1%10;
			if(rem==4)
			{
				b=b+pow(10,j);
			}
			n1=n1/10;
			
		}
		a=n-b;
		ans[i][0]=a;
		ans[i][1]=b;
	}
	for(i=0;i<t;i++)
	{
		printf("\ncase #%d: %d %d",i+1,ans[i][0],ans[i][1]);
	}
	return 0;
}
