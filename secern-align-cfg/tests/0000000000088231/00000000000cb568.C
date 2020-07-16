#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()

{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char *s=(char*)malloc(sizeof(char)*101);
		scanf("%s",s);
		int x=strlen(s);
		char *a=(char*)malloc(sizeof(char)*101);
		char *b=(char*)malloc(sizeof(char)*101);
		
		for(int i=x-1;i>=0;i--)
		{
			if(s[i]=='4')
			{
				a[i]='2';
				b[i]='2';
			}
			else
			{
			a[i]=s[i];
		    b[i]='0';
			}
		}
	     for(int j=0;j<x;j++)
	     printf("%c",a[j]);
	     printf(" ");
	     for(int j=0;j<x;j++)
	     printf("%c",b[j]);
	     
	}
}
