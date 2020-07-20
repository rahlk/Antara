#include<stdio.h>

int main()
{
	int t,a[1000],b[100][100],d[100][2],i,j,k,l,c,e;

	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<t;i++)
	{
		k=0;
		d[i][0]=(a[i]/2);
		d[i][1]=(a[i]-d[i][0]);
		check:
		c=d[i][0];
		e=d[i][1];
		for(j=0;c!=0;j++)
		{
			b[k][j]=c%10;
			c/=10;
		}
		k++;
		for(j=0;e!=0;j++)
		{
			b[k][j]=e%10;
			e/=10;
		}
		k--;

		for(l=0;l<j;l++)
		{
			if((b[k][l]==4) || (b[k+1][l]==4))
			{
					d[l][0]--;
					d[l][1]++;
					goto check;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("Case # %d: %d %d",i+1,d[i][0],d[i][1]);
	}
	return 0;
}