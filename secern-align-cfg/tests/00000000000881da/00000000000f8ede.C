#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{	long int dimension;
		char *path,*altpath;
		scanf("%ld",&dimension);
		//char path[(2*dimension)-1],altpath[(2*dimension)-1]
	    path = malloc(sizeof((2*dimension)-1));
	    altpath = malloc(sizeof((2*dimension)-1));
		scanf("%s",path);
		for(long int k=0;path[k]!='\0';k++)
		{	

			if(path[k]=='S')
				altpath[k]='E';
				else if(path[k]=='E')
				altpath[k]='S';
		}
		printf("Case #%d: %s \n",i+1,altpath);	


	}
	


	return 0;
}
