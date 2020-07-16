#include <stdio.h>
#include <string.h>
int main()
{
	int cases , j=0 , i , n , len[i];
	char dir[100][50000];
	scanf("%d",&cases);
	for (i=0;i<cases;i++)
		scanf("%d",&n);
		len[i]=2*n-2;
		scanf("%s",dir[i]);
	for(i = 0 ; i < cases ; i++)
		for ( j = 0 ; j < len[i]; j++)
			if (dir[i][j]=='S')
				dir[i][j]='E';
			else
				dir[i][j]='S';
		printf("Case #%d: %s\n",i+1,dir[i]);
}