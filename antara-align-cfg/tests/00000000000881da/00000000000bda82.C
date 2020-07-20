#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n;
	char ch;
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		char* str=(char*)malloc(sizeof(char)*(2*n));
		scanf("%s",str);
		for(int i=0;str[i]!='\0';i++)
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
		printf("%s\n",str);
	}
}