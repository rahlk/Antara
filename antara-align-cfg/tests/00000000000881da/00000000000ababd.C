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
	char lastC;
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
			lastC=P[i];
		if (lastC=='E')
			G = 'E';
		else G ='S';

		if (G=='S')
		{
			while (sy<(N-1))
			{
				if (px==sx && py==sy)
				{
					if (P[pc]=='S')
					{
						S[sc]='E';
						sx++;
						py++;
					}
					else 
					{
						S[sc]='S';
						sy++;
						px++;
					}
				}
				else
				{
					S[sc]='S';
					sy++;
				}

				if (P[pc]=='S')
					py++;
				else
					px++;

				pc++;
				sc++;
			}
			while (sc<(2*N-2))
				S[sc++]='E';
		}
		else if (G=='E')
		{
			while (sx<(N-1))
			{
				if (px==sx && py==sy)
				{
					if (P[pc]=='E')
					{
						S[sc]='S';
						sy++;
						px++;
					}
					else 
					{
						S[sc]='E';
						sx++;
						py++;
					}
				}
				else
				{
					S[sc]='E';
					sx++;
				}

				if (P[pc]=='S')
					py++;
				else
					px++;

				pc++;
				sc++;
			}
			while (sc<(2*N-2))
				S[sc++]='S';
		}

		S[sc]=0;

		printf("Case #%d: %s\n",t,S);
	}
	return 0;
}
