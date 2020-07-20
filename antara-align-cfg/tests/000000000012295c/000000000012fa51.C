#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max,maxx,maxy,t,i,x,y,j,ar[11][11],c,p,q,m,n;
	char d;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		max=-1;
		for(m=0;m<11;m++)
			for(n=0;n<11;n++)
				ar[m][n]=0;
		scanf("%d %d",&p,&q);
		for(j=1;j<=p;j++)
		{
			scanf("%d %d %c",&x,&y,&d);
			if(d=='S')
			{
				for(c=y-1;c>=0;c--)
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
		printf("Case #%d: %d %d\n",i,maxx,maxy);
	}
}
