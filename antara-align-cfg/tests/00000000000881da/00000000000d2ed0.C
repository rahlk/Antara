#include <stdio.h>
#include <string.h>

int main()
{
	int T,i;
	scanf("%d",&T);
	char answers[T][100000];
	for (i=1;i<=T;i++)
	{
		long int N,j;
		scanf("%ld",&N);
		char P[2*N-2],path[2*N-2];
		scanf("%s",P);
		for(j=0;j<2*N-2;j++)
		{
			if (P[j]=='S')
				path[j]='E';
			else
				path[j]='S';
		}
		path[2*N-2]='\0';
		//printf("%s\n",path);
		strcpy(answers[i-1],path);
	}

	for (i=0;i<T;i++)
		printf("Case #%d: %s\n",i+1,answers[i]);
	return 0;
}