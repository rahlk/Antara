#include<stdio.h>
int main()
{
	int t,j=0,i;
	scanf("%d",&t);
	long int n;
	char p[100000];
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		scanf("%s",&p);
		while(p[j]!='\0')
		{
			if(p[j]=='S')
			{
				p[j]='E';
				j++;
			}
			else
			{
				p[j]='S';
				j++;
			}
		}
		printf("Case #%d: %s",i+1,p);
		j=0;
	}
	return 0;
}
