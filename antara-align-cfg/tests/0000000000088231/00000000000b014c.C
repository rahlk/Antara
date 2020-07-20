#include<stdio.h>
int four(int n)
{
	while (n)
	{
		
		if(n%10==4)
			return 1;
		n=n/10;
	}
	
}

int main()
{
	int T;
	scanf("%d",&T);
	int i=1,x=1;
	int j,n,flag;
	while(T)
	{
		flag=1;
		scanf("%d",&n);
		if (four(n)!=1)
			{
				printf("Case #%d: 0 %d",x,n);
				flag=0;
			}
		
		while (flag)
		{
			j=n-i;
			
		
			if(four(j)!=1 && four(i)!=1)
			{
				printf("Case #%d: %d %d\n",x,i,j);
				i=1;
				flag=0;
			}
			else
				i++;
		}
		T--;
		x++;
	}
}
			
		