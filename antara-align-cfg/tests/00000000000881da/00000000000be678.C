#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n;
	char ch;
	for(int j=0;j<t;j++)
	{
		scanf("%d",&n);
		char* str=(char*)malloc(sizeof(char)*((2*n)-2));
		scanf("%s",str);
		for(int i=0;i<((2*n)-2);i++)
		{
			if(str[i]=='E')
			{
				str[i]='S';
			}
			else
			{
				str[i]='E';
			}
		}
		printf("Case #%d: %s\n",j+1,str);
	}
}