#include <stdio.h>

int main()
{
	int T;
	char NS[200],AS[200],BS[200];
	int i;
	int t;
	int ac,bc;
	int ff;
	scanf("%d",&T);
	for (t=1;t<=T;t++)
	{
		scanf("%s",NS);
		for (i=0;i<200;i++)
			AS[i]=BS[i]=0;
		ac = 0;
		bc = 0;
		ff = 0;

		for (i=0;NS[i];i++)
			if (NS[i]=='4')
			{
				BS[bc++]='2';
				AS[ac++]='2';
				ff = 1;
			}
			else
			{
				AS[ac++]=NS[i];
				if (ff) BS[bc++]='0';
			}
		AS[ac]=BS[bc]=0;

		printf("Case #%d: %s %s\n",t,AS,BS);
	}
	return 0;
}
