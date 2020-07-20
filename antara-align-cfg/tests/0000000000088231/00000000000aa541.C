#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		long int N;
		scanf("%d",&N);
		long int x=N;
		int arr[10],j=0,d=0;
		while(x)
		{
			d++;
			if(x%10==4)
			arr[j++]=1;
			else
			arr[j++]=x%10;
			x=x/10;
		}
		for(--j;j>=0;j--)
		{
			x=x+pow(10,j)*arr[j];
		}
		printf("Case #%d: %d %d\n",i,x,N-x);
	}
}
