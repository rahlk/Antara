#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T;
	int N;
	int i;
	int t;
	int pc,sc;
	int px,py;
	int sx,sy;
	char *P,*S;
	char G;
	P = malloc(sizeof(char)*100000);
	S = malloc(sizeof(char)*100000);
	scanf("%d",&T);
	for (t=1;t<=T;t++)
	{
		S[0]=P[0]=0;
		sx = sy = px = py = pc = sc = 0;
		scanf("%d",&N);
		scanf("%s",P);
		for (i=0;P[i];i++)
			if (P[i]=='E') S[i]='S';
			else S[i]='E';

		S[i]=0;

		printf("Case #%d: %s\n",t,S);
	}
	return 0;
}
