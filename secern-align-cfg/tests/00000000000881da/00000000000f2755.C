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
		//int **arr=(int **)malloc(dimension * sizeof(int *));
		int arr[dimension][dimension];
		//for(int i=0;i<dimension;i++)
		//arr[i]=(int *)malloc(dimension * sizeof(int));
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
		
		printf("Case #%d: %s\n",i+1,altpath);	

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