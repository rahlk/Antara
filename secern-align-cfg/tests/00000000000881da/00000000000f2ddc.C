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
		//altpath = malloc(sizeof((2*dimension)-1));
		scanf("%s",path);
		for(int k=0;k<strlen(path);k++)
		{	

			if(path[k]=='S')
				path[k]='E';
			else
				path[k]='S';
		}
		
		printf("Case #%d: %s\n",i+1,path);	


	}
	


	return 0;
}
