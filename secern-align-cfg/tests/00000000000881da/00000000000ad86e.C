#include <stdio.h>

int main()
{
	int t,N,i=0,j=0,k = 0,count = 1;
	scanf("%d",&t);
	while(t > 0)
	{
		scanf("%d",&N);
		int grid[N][N];
		int n = 2*N-2;
		int muN = n;
		char P[n];
		for (i = 0;i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				grid[i][j] = 0;
			}
		}
		/*for (i = 0;i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("%d ",grid[i][j]);
			}
			printf("\n");
		}*/
		getchar();
		fgets(P, 2*N-1, stdin);
		i = 0;
		j = 0;
		k = 0;
		while (muN > 0 )
		{
			if(P[k] == 'S')
			{
				i++;
				grid[i][j] = 1;
			}
			else
			{
				j++;
				grid[i][j] = 1;
			}
			//printf("I:%d J:%d\n",i,j);
			k++;
			muN--;
		}
		//printf("entrei\n");
		//grid[N-1][N-1] = 3;
		//printf("%s\n", P );
		/*for (i = 0;i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("%d ",grid[i][j]);
			}
			printf("\n");
		}*/
		muN = n;
		i = 0;
		j = 0;
		k = 0;
		int limite = 0;
		int controle = 2;
		while(muN > 0)
		{
			if(controle == 1){
				if(i+1 < N)
				{
					if(grid[i+1][j] != 1)
					{
						i++;
						P[k] = 'S';
						limite = 1;
						k++;
						muN--;
					}
					
					else if((grid[i+1][j] == 1) && (limite > 0))
					{
						i++;
						P[k] = 'S';
						limite--;
						k++;
						muN--;
					}
					controle = 2;
				}
			}
			else if(controle == 2){
				//printf("JJJJJJJ:%d\n",j);
				if(j+1 < N)
				{
					if(grid[i][j+1] != 1)
					{
						j++;
						P[k] = 'E';
						limite = 1;
						k++;
						muN--;
					}
					
					else if((grid[i][j+1] == 1) && (limite > 0))
					{
						j++;
						P[k] = 'E';
						limite--;
						k++;
						muN--;
					}
					controle = 1;
				}
			}
				
		}
		printf("Case #%d: %s\n",count,P );
		t--;
		count++;
	}
	
}

