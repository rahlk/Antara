#include<stdio.h>
#include<string.h>

int main()
{
	char r[120000];
	int tt,t,i,d;
	
	
	scanf("%d",&tt);
	
	for(t=1;t<=tt;t++)
	{
		scanf("%d",&d);
		scanf("%s", r);
		
		
		for(i=0;i<strlen(r);i++)
		{
			if(r[i]=='S')
			r[i]='E';
			else r[i]='S';
		}
		
		printf("Case #%d: %s\n",t,r);
	}
	
	return 0;
}