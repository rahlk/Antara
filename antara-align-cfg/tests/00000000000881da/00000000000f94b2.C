#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{	long int dimension;
		char *path,*altpath;
		scanf("%ld",&dimension);
	    path = malloc(sizeof((2*(dimension-1))+1));
	    altpath = malloc(sizeof((2*(dimension-1))+1));
		scanf("%s",path);
		for(long int k=0;path[k]!='\0';k++)
		{	

			if(path[k]=='S')
				altpath[k]='E';
			 if(path[k]=='E')
				altpath[k]='S';
		}
		printf("Case #%d: %s \n",i+1,altpath);	


	}
	


	return 0;
}
