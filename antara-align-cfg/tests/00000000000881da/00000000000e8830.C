#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{	int dimension,l=0,m=0;
		char *path,*altpath;
		scanf("%d",&dimension);
		path = malloc(sizeof((2*dimension)-1));
		altpath = malloc(sizeof((2*dimension)-1));
		scanf("%s",path);
		int **arr=(int **)malloc(dimension * sizeof(int *));
		for(int i=0;i<dimension;i++)
		arr[i]=(int *)malloc(dimension * sizeof(int));
		for(int k=0;k<strlen(path);k++)
		{	
			if((l==0) && (m==0))
			arr[l][m]=5;
			if(path[k]=='S')
			{
			l++;
			arr[l][m]=1;
			altpath[k]='E';
			}
			if(path[k]=='E')
			{
			m++;
			arr[l][m]=1;
			altpath[k]='S';
			}	
			if((l==dimension-1) && (m==dimension-1))
			arr[l][m]=5;
		}
		for(int i=0;i<dimension-1;i++)
		for(int j=0,k=0;j<dimension-1;j++)
		{
			if(arr[i+1][j]==1)
			{
			arr[i][j+1]=2;
			altpath[k++]='E';
			}
			if(arr[i][j+1]==1)
			{
			arr[i+1][j]=2;
			altpath[k++]='S';
			}
		}
		printf("Case: #%d: %s\n",i+1,altpath);	

		/*for(int i=0;i<dimension;i++)
		{
		for(int j=0;j<dimension;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
		}*/  
	}
	


	return 0;
}