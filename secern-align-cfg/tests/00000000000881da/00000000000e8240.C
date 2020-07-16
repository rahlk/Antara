#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,y;
	scanf("%d",&t);
	y=1;
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		char s[(2*n)-2];
		scanf("%s",&s);
		for(i=0;i<((2*n)-2);i++)
		{
		    if(s[i]=='E')
		        s[i]='S';
		    else
		        s[i]='E';
		}
		printf("Case #%d: %s\n",y,s);
		y++;
	}
	return 0;
}