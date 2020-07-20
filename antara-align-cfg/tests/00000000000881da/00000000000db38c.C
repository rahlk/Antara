#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,n,i,count=0;
	scanf("%d",&test);
	char input[test][50000],final[test][50000];
	while(count!=test)
	{
		scanf("%d %s",&n,input[count]);
		for(i=0;i<strlen(input[count]);i++)
		{
			if(*(input[count]+i)=='E')
				*(final[count]+i)='S';
			else
				*(final[count]+i)='E';
		}
		*(final[count]+i)='\0';
		count++;
	}
	for(i=0;i<test;i++)
	{
		printf("Case #%d: ",i+1);
		puts(final[i]);
	}
	return 0;
}