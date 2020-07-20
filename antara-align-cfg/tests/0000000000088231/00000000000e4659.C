#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;//,x=0,y=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		aint x=0,y=0;
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
			}a
			else
			{
				b[i]=0;
			}
		}
/*		for(i=0;i<k;i++)
		printf("%d",c[i]);
		for(i=0;i<k;i++)
		printf("%d",b[i]);
*/		for(i=0;i<k;i++)
		{
//			printf("the x is %d",x);
//			printf("the y is %d",y);

			x=x+c[i]*pow(10,i);
			y=y+b[i]*pow(10,i);
		}
		printf("case #%d: %d %d\n",j,x,y);
	}
}
