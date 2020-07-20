#include<stdio.h>
#include<string.h>
int find_way(int,int,char[]);
int main()
{
	char in[2000];
	int n,t,i;
//	printf("Enter the no of test cases:");
	scanf("&d",&t);
	for(i=1;i<=t;i++)
	{
		fflush(stdin);
	//	printf("Enter the size of the maze:");
		scanf("%d",&n);
	//	printf("Enter the string:");
		scanf("%s",in);
		fflush(stdin);
		find_way(i,n,in);
	}
	return 0;
}
int find_way(int t,int n,char str[])
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
	printf("Case #%d: %s\n ",t,op);
	return 0;
}
