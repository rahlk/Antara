#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max-1,maxx,maxy,t,i,x,y,j,grid[11][11],c,p,q,m,n;
	char d;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		grid[11][11]={0};
		scanf("%d %d",&p,&q);
		for(j=1;j<=p;j++)
		{
			scanf("%d %d %c",x,y,d);
			if(d=='S')
			{
				for(c=y-1,c>=0;c--)
					ar[x][c]++;
			}
			else if(d=='N')
			{
				for(c=y+1;c<=q;c++)
					ar[x][c]++;
			}
			else if(d=='E')
			{
				for(c=x+1;c<=q;c++)
					ar[c][y]++;
			}
			else
			{
				for(c=x-1;c>=0;c--)
					ar[c][y]++;
			}
		}
		for(m=0;m<=q;m++)
		{
			for(n=0;n<=q;n++)
			{
				if(max<ar[m][n])
				{
					maxx=m;
					maxy=n;
				}
			}
		}
		printf("Case #%d: %d %d\n",maxx,maxy);
	}
}
