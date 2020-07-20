#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,i3=1;
	scanf(" %d",&t);
	char n[100];
	char n1[100];
	while(t--)
	{
		scanf(" %s",n);
		for(i=0;i<strlen(n);i++)
		{
			if(n[i]=='4')
			{
				n[i]='3';
				n1[i]='1';
			}
		}
		printf("Case #%d: %s %s",i3++,n,n1);
	}
}