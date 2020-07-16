#include<stdio.h>
#include<string.h>
char ar[100003];
int maze[20001][20001];
int main()
{
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++)
	{
		int n,i=0,j=0;
		scanf("%d",&n);
		scanf("%s",ar);
		int l=strlen(ar);
		for(int p=0;p<l;p++)
		{
			if(ar[p]=='E')
			{
				i++;
				maze[i][j]=1;
			}
			else
			{
				j++;
				maze[i][j]=1;
			}
		}
		i=0;
		j=0;
		printf("Case #%d: ",q);
		while(i!=n-1 || j!=n-1)
		{
			if(maze[i+1][j]==1)
			{
				j++;
				printf("S");
				while(maze[i][j]!=1 && i+1!=n-1)
				{
					i++;
					printf("E");
				}
				if(i+1==n-1)
				{
					while(j!=n-1)
					{
						j++;
						printf("S");
					}
					i++;
					printf("E");
				}

			}
			else
			{
				i++;
				printf("E");
				while(maze[i][j]!=1 && j+1!=n-1)
				{
					j++;
					printf("S");
				}
				if(j+1==n-1)
				{
					while(i!=n-1)
					{
						i++;
						printf("E");
					}
					j++;
					printf("S");
				}
			}
		}
		printf("\n");
		i=0;
		j=0;
		for(int p=0;p<l;p++)
		{
			if(ar[p]=='E')
			{
				i++;
				maze[i][j]=0;
			}
			else
			{
				j++;
				maze[i][j]=0;
			}
		}

	}
	return 0;
}






