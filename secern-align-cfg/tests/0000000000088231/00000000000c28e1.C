#include<stdio.h>
#include<math.h>
int main()
{
	long int arr[100],i,n,a,b,temp,count=0,x,y,t,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	b=0;
	scanf("%d",&n);
	temp=n;
	y=n;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		x=n%10;
		arr[i]=x;
		n=n/10;
	}
	a=y;
	for(i=0;i<count;i++)
	{
		if(arr[i]==4)
		{
			b=b+pow(10,i);
			a=a-pow(10,i);
		}

	}
	printf("Case #%d:%d %d",j,a,b);
	}
}
