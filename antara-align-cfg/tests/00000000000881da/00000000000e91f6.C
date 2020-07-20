#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int cases , j=0 , i , n;
	char dir[100][50000] , mine[100][50000];
	scanf("%d",&cases);
	for (j=0;j<cases;j++)
	{
		scanf("%d",&n);
		for(i=0 ; i < (2*n) - 2 ; i++)
		{	
			scanf("%s",&dir[j][i]);
			if (dir[j][i]=='S')
			{
				mine[j][i]='E';
			}
			else
			{
				mine[j][i]='S';
			}
		}
	}
	for (; j<cases ; j++ )
	{
		for (i = 0; i < (2*n) - 2; i++)
		{
			printf("Case #%d: %s\n",j+1,mine[j][i]);
		}
		printf("\n");
	}
}