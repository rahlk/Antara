#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
	{
	unsigned int num_tests,t,p,q,x,y,i,j;
	char d;
	unsigned short up[10000];
	unsigned short right[10000];
	unsigned int bx,by;

	scanf("%d",&num_tests);
	for(t=0;t<num_tests;t++)
		{
		scanf("%d %d",&p,&q);
		memset(up,0,sizeof(up));
		memset(right,0,sizeof(right));
		for(i=0;i<p;i++)
			{
			scanf("%d %d %c\n",&x,&y,&d);
			switch(d)
				{
			case 'N':
				for(j=y+1;j<q;j++)
					{
					up[j]++;
					}
			break;
			case 'S':
				for(j=0;j<y;j++)
					{
					up[j]++;
					}
			break;
			case 'E':
				for(j=x+1;j<q;j++)
					{
					right[j]++;
					}
			break;
			case 'W':
				for(j=0;j<x;j++)
					{
					right[j]++;
					}
			break;
				}
			}
		bx=by=0;
		for(j=1;j<q;j++)
			{
			if(up[j]>up[by])
				{
				by=j;
				}
			if(right[j]>right[bx])
				{
				bx=j;
				}
			}
		printf("Case #%u: %d %d\n",t+1,bx,by);
		}
	}
