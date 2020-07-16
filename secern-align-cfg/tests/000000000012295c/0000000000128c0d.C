#include <stdio.h>

int main()
{
	int i,j,k,m,n;
	int P, Q;
	int T,t;
	char c;
	int x[500],y[500],dx[500],dy[500];
	char dir[500];
	int maxx[100001],maxy[100001];
	int mx,my,mxp,myp;
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
		
		for(i=0;i<=Q;i++)
		{
			maxx[i]=0;
			maxy[i]=0;
			
			for(k=0;k<P;k++)
			{
				if(dir[k]=='E') if(i>x[k]) maxx[i]++;
				if(dir[k]=='W') if(i<x[k]) maxx[i]++;

				if(dir[k]=='N') if(i>y[k]) maxy[i]++;
				if(dir[k]=='S') if(i<y[k]) maxy[i]++;

			}
		}
		
/*		for(i=0;i<=Q;i++)
		{
			printf("%d " ,maxx[i]);
		}
		printf("  <- maxx\n");
		
		for(i=0;i<=Q;i++)
		{
			printf("%d " ,maxy[i]);
		}
		printf("  <- maxy\n");
*/		
		mxp=-1; myp=-1;
		for(i=0;i<=Q;i++)
		{
			if(maxx[i]>mxp) {mxp=maxx[i]; mx=i;}
			if(maxy[i]>myp) {myp=maxy[i]; my=i;}
		}

		printf("Case #%d: %d %d\n", t,mx,my);
	}
	return 0;
}
	
	