#include <stdio.h>

int main()
{
	char P[100000+1];
	char Y[100000+1];

	int x, T;
	scanf("%d", &T);
	for(x=1; x<=T; x++)
	{
		int N;
		scanf("%d", &N);
		scanf("%s", P);

		int end = 2*(N-1)-1;
		int i, j=0;

		if(P[0]=='S' && P[end]=='E')
		{
			for(i=0; i < N-1; i++) Y[j++] = 'E';
			for(i=0; i < N-1; i++) Y[j++] = 'S';
		}

		if(P[0]=='E' && P[end]=='S')
		{
			for(i=0; i < N-1; i++) Y[j++] = 'S';
			for(i=0; i < N-1; i++) Y[j++] = 'E';
		}

		if(P[0]=='S' && P[end]=='S')
		{
			int k=0;
			for(i=0; i < end; i++)
				if(P[i]=='E'){
					k++;
					if(P[i+1]=='E') break;
				}
			for(i=0; i < k  ; i++) Y[j++] = 'E';
			for(i=0; i < N-1; i++) Y[j++] = 'S';
			for(i=k; i < N-1; i++) Y[j++] = 'E';
		}

		if(P[0]=='E' && P[end]=='E')
		{
			i7nt k=0;
			for(i=0; i < end; i++)
				if(P[i]=='S'){
					k++;
					if(P[i+1]=='S') break;
				}
			for(i=0; i < k  ; i++) Y[j++] = 'S';
			for(i=0; i < N-1; i++) Y[j++] = 'E';
			for(i=k; i < N-1; i++) Y[j++] = 'S';
		}

		Y[j] = 0;
		printf("Case #%d: %s\n", x, Y);
	}
	return 0;
}
