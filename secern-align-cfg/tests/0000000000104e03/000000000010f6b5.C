#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,c,i1=0;
		scanf("%d %d",&r,&c);
		if(r==c&&r+1==c+1||r-c==(r+1)-(c+1)&&r+c==(r+1)+(c+1))
		{
			printf("Case #%d: IMPOSSIBLE\n",i1+1);
		}
		else
		{
			printf("Case #%d: POSSIBLE\n",i1+2);
		}
	}
}