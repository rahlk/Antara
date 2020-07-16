#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{	int dimension;
		char *path;
		scanf("%d",&dimension);
		//char path[(2*dimension)-1],altpath[(2*dimension)-1]
	    path = malloc(sizeof((2*dimension)-1));
		scanf("%s",path);
		for(int k=0;path[k]!='\0';k++)
		{	

			if(path[k]=='S')
				path[k]='E';
				else if(path[k]=='E')
				altpath[k]='S';
		}
		altpath[k]='\0';
		printf("Case #%d: %s \n",i+1,altpath);	


	}
	


	return 0;
}
