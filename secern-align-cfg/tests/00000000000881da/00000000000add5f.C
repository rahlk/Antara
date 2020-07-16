#include<stdio.h>
#include<string.h>
int find_way(int,char[]);
int main()
{
	char in[2000];
	int n,t,i;
	scanf("&d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		scanf("%s",in);
		find_way(n,in);
	}
	return 0;
}
int find_way(int n,char str[])
{
	char op[2000]="",ch;
	int i;
	for(i=0;(ch=str[i])!='\0';i++)
	{
		//printf("%c",ch);
		if(ch=='E')
		{
			strcat(op,"S");
		}
		else
		{
			strcat(op,"E");
		}
	}
	printf("Case #%d: %s\n ",T,OP);
	return 0;
}
