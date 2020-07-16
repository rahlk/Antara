#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,m;
	scanf("%d",&t);
	n = t;
	long int fnum[n],lnum[n],f,l;
	while(t--)
	{
		f = 0; l = 0;
		long int num,numTemp;
		scanf("%li",&num);
		numTemp = num;
		int x,i=0;
		while(numTemp != 0)
		{
			x = numTemp%10;
			if(x == 4)
			{
				f += (3*pow(10,i));
				l += (1*pow(10,i));
			}
			else
				f += (x*pow(10,i));
			i++;
			numTemp /= 10;
		}
		fnum[n-t-1] = f;
		lnum[n-t-1] = l;
	}
	m = n;
	while(m--)
		printf("Case #%d: %li %li\n",n-m,fnum[n-m-1],lnum[n-m-1]);
	return 0;
}
