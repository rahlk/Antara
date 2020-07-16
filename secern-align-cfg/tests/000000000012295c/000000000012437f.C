#include <stdio.h>

int main()
{
	int i,j,k,m,n;
	int P, Q;
	int T,t;
	char c;
	int x[500],y[500],dx[500],dy[500];
	char dir[500];
	int maxx,maxy,maxp;
	int count;
	
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		fscanf(stdin, "%d%d", &P,&Q); 		
		for(i=0;i<P;i++)
		{
			fscanf(stdin, "%d %d %c", &x[i], &y[i], &dir[i]);
			//printf("%d %d %c\n", x[i], y[i], dir[i]);
		}
		
		maxp=-1;
		for(i=0;i<=Q;i++)
		for(j=0;j<=Q;j++)
		{
			count=0;
			for(k=0;k<P;k++)
			{
				if(dir[k]=='N') if(j>y[k]) count++;
				if(dir[k]=='S') if(j<y[k]) count++;
				if(dir[k]=='E') if(i>x[k]) count++;
				if(dir[k]=='W') if(i<x[k]) count++;
			}
			
			if(count>maxp)
			{
				maxp=count;
				maxx=i;
				maxy=j;
			}
		}
		printf("Case #%d: %d %d\n", t,maxx,maxy);
	}
	return 0;
}
	
	