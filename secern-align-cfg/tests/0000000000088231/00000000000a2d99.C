#include <stdio.h>
#include <string.h>
int main()
{
	int test,i,j;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		char num1[100];
		char num2[100];
		scanf("%s",num1);
		int size;
		size=strlen(num1);
		for(j=0;j<size;j++)
		num2[j]=num1[j];
		for(j=0;j<size;j++)
		{
			if(num1[j]=='4')
			{
				num1[j]='3';
				num2[j]='1';
			}
			else
			num2[j]='0';
		}
		printf("Case #%d: ",i+1);
		printf("%s ",num1);
		for(j=0;j<size;j++)
		{
			if(num2[j]!='0')
			break;
		}
		for(;j<size;j++)
		printf("%c",num2[j]);
		printf("\n");
	}
}