#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,x=0,y=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		int a,a1,t,c[30],k=0,m=0,b[30];
		scanf("%d",&a);
		a1=a;
		while(a1!=0)
		{
			t=a1%10;
			c[k]=t;
			k++;
			a1=a1/10;
		}
		for(i=0;i<k;i++)
		{
			if(c[i]==4)
			{
				c[i]=c[i]/2;
				b[i]=c[i];
			}
			else
			{
				b[i]=0;
			}
		}
		for(i=0;i<k;i++)
		{
			x=x+c[i]*pow(10,i);
			y=y+b[i]*pow(10,i);
		}
		printf("case #%d: %d %d\n",j,x,y);
	}
}
