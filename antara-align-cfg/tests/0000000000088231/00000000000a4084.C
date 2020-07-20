#include<stdio.h>
#include<math.h>
int main()
{
	long int arr[100],i,n,a,b=0,temp,count=0,x,y;
	printf("Enter the number:");
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
	for(i=0;i<count;i++)
	{
		printf("%ld",arr[i]);
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
	printf("\nThe number are :%ld %ld",a,b);
}
