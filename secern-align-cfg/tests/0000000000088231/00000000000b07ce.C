#include<stdio.h>
#include<math.h>
long int getDigit(long int x)
{
	long int count=0;
	while(x!=0)
	{
		x=x/10;
		++count;
	}
	return count;
}
int main(){
	long int i,T,n,N,num,arr[100],j,x,y=0;
	scanf("%ld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0;i<T;i++)
	{
		n=getDigit(arr[i]);
		if(n>1)
		{
			if(n==2)
			{
				x=arr[i]-5;
				num=arr[i]-x;
			}
			else if(n>2)
			{
				if(n==3)
				{
					x=(5*10)+1;
					num=arr[i]-x;
				}
				else if(n>3)
				{
					for(j=3;j<=n;j++)
					{
						y+=pow(10,j-3);
					}
					x=(5*pow(10,n-2))+y;
					num=arr[i]-x;
				}
			}
		}
		else
		{
			x=arr[i]-1;
			num=arr[i]-x;
		}
		printf("Case #%ld: %ld %ld\n",i+1,x,num);
	}
	return 0;
}