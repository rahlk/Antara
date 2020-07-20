#include<stdlib.h>
int main()
{
	int T,dimension;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int k;
		char *path,*altpath;
		scanf("%ld",&dimension);
	    path = malloc(sizeof((2*(dimension-1))+1));
	    altpath = malloc(sizeof((2*(dimension-1))+1));
		scanf("%s",path);
		for(k=0;path[k]!='\0';k++)
		{	

			if(path[k]=='S')
				altpath[k]='E';
			 if(path[k]=='E')
				altpath[k]='S';
		}
		if(path[k]=='\0')
		altpath[k]='\0';
		printf("Case #%d: %s\n",i+1,altpath);	


	}
	 return 0;
}
