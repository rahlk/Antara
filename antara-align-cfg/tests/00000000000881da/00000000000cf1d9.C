#include <stdio.h>
#include <string.h>


int x[100000];
int y[100000];
int map[1000][1000];
int n;
char out[100000];
char out2[100000];

int move(int xx, int yy)
{
	int k;
	k=xx+yy;
	
	if(xx>=n) return 2;
	if(yy>=n) return 2;
	if(map[xx][yy]==2) return 2;
	if(map[xx][yy]==1) return 1;
	
	if(xx==n-1 && yy==n-1)
	{
		//printf("done!");
		map[xx][yy]=1;
		return 1;
	}
	
	if(xx==x[k] && yy==y[k])
	{
		if(x[k+1]>x[k]) 
		{
			if(move(xx,yy+1)==1) 
			{
				//printf("%d %d   ", xx,yy);
				//printf("S");
				sprintf(out2, "S%s",out);
				strcpy(out,out2);
				map[xx][yy+1]=1;
				return 1;
			}
		}
		else if(y[k+1]>y[k]) 
		{
			if(move(xx+1,yy)==1)
			{
				//printf("%d %d   ", xx,yy);
				//printf("E");
				sprintf(out2, "E%s",out);
				strcpy(out,out2);
				map[xx+1][yy]=1;
				return 1;
			}
		}
	}
	else
	{
		if(move(xx,yy+1)==1) 
		{
			//printf("%d %d   ", xx,yy);
			//printf("S");
			sprintf(out2, "S%s",out);
			strcpy(out,out2);
			map[xx][yy+1]=1;
			return 1;
		}

		if(move(xx+1,yy)==1)
		{	
			//printf("%d %d   ", xx,yy);
			//printf("E");
			sprintf(out2, "E%s",out);
			strcpy(out,out2);
			map[xx+1][yy]=1;
			return 1;
		}

	}
	return 2;
}


int main()
{
	int i,j,k,m;
	int T,t;
	char s[100000];
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
		
		x[0]=0; y[0]=0; //map[0][0]=1;
		for(i=0;i<k;i++)
		{
			if(s[i]=='E') {x[i+1]=x[i]+1; y[i+1]=y[i];}
			if(s[i]=='S') {x[i+1]=x[i]; y[i+1]=y[i]+1;}
			//map[x[i+1]][y[i+1]]=1;
		}
		
		//for(i=n-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
		move(j,j);		
		
		//strcpy(out,"");
		
		//move(0,0);
		/*printf("\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++) printf("%d ", map[j][i]);
			printf("\n");
		}*/
		
		p=0; q=0;
		for(k=0;k<2*n-2;k++)
		{
			if(map[p+1][q]==1) 
			{
				printf("E");
				p++;
			}
			else if(map[p][q+1]==1) 
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