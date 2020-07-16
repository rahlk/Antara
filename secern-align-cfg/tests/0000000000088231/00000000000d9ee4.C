#include<stdio.h>
#include<math.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{ int n;
		scanf("%d",&n);

		int i=0,d,n1=0,num=n;
		while(n!=0)
		{ 	d=n%10;
			if(d==4)
				d-=1;
			n1=n1+d*pow(10,i++);
			n/=10;
		}
		printf("%d %d\n",n1,num-n1);
	}
	return 0;
}
