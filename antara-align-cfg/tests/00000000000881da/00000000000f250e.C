#include <stdio.h>
#include <string.h>


int x[100005];
int y[100005];
int map[50005][50005];
int n;

int main()
{
	int i,j,k,m;
	int T,t;
	char s[100005];
	int p,q;
		
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		fscanf(stdin, "%d", &n);
		fscanf(stdin, "%s", s);
		k=strlen(s);
		
		printf("Case #%d: ", t);
		
		for(i=0;i<n;i++)
		for(j=0;j<n;j++) map[i][j]=0;
		
		x[0]=0; y[0]=0;
		for(i=0;i<k;i++)
		{
			if(s[i]=='E') {x[i+1]=x[i]+1; y[i+1]=y[i];}
			if(s[i]=='S') {x[i+1]=x[i]; y[i+1]=y[i]+1;}
		}

		
		for(i=0;i<=n;i++)
		for(j=0;j<=n;j++) map[i][j]=0;

		map[n-1][n-1]=1;
		for(i=n-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
		{
			//printf("%d %d\n", i,j);
			if(map[i][j]==1) continue;
			k=i+j;
			if(x[k]==i && y[k]==j)
			{	
				//printf("%d %d   %d %d  %d %d\n", i,j,x[k+1],y[k+1], map[i][j+1], map[i+1][j]);
				if(x[k+1]>x[k]) map[i][j]=map[i][j+1];
				if(y[k+1]>y[k]) map[i][j]=map[i+1][j];
			}
			else map[i][j]=map[i][j+1]|map[i+1][j];
		}
				

		/*printf("\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++) printf("%d ", map[j][i]);
			printf("\n");
		}*/
		
		p=0; q=0;
		for(k=0;k<2*n-2;k++)
		{
			if(x[k]==p && y[k]==q)
			{
				if(x[k+1]>x[k]) 
				{
					printf("S");
					q++;
				}
				else if(y[k+1]>y[k]) 
				{
					printf("E");
					p++;
				}
				else printf("Wrong");
			}
			else if(map[p+1][q]>0) 
			{
				printf("E");
				p++;
			}
			else if(map[p][q+1]>0) 
			{
				printf("S");
				q++;
			}
			else printf("Wrong");
		}
		printf("\n");
	}
	
	return 0;
}