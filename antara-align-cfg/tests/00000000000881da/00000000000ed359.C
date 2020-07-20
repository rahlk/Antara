#include <stdio.h>
#include <string.h>
int main()
{
	int cases , j=0 , i , k , n;
	char dir[100][50000];
	scanf("%d",&cases);
	for (i=0;i<cases;i++)
	{
		scanf("%d",&n);
		scanf("%s",dir[i]);
	}
	for(i = 0 ; i < cases ; i++)
	{	
		for ( j = 0 ; j < 2*n-2 ; j++)
		{
			if (dir[i][j]=='S')
			{
				//printf("cond 1 j = %d\n", j);
				dir[i][j]='E';
				//printf("%s\n",dir[]);
			}
			else
			{
				//printf("cond 2 j = %d\n",j);
				dir[i][j]='S';
			}
		}
		printf("Case #%d: %s\n",i+1,dir[i]);
	}
}