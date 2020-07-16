#include<stdio.h>

int noFour(long int n)
{
	long int x;
	while(n!=0)
	{
		x = n%10;
		if(x == 4)
			return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t,n,m;
	scanf("%d",&t);
	n = t;
	long int fnum[n],lnum[n];
	while(t--)
	{
		long int num,i;
		scanf("%li",&num);
		for(i=1;i<num;i++)
		{
			if(noFour(i) && noFour(num-i))
			{
				fnum[n-t-1] = num-i;
				lnum[n-t-1] = i;
				break;
			}
		}
	}
	m = n;
	while(m--)
		printf("Case #%d: %li %li\n",n-m,fnum[n-m-1],lnum[n-m-1]);
	return 0;
}
