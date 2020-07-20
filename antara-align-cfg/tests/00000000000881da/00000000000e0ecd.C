#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	int j=1;
	while(t>0)
	{
		int n;
		scanf("%d",&n);
		char *a=(char*)malloc(sizeof(char)*n);
		scanf("%s",a);
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='E')
			{
				a[i]='S';
			}
			else
			{
				a[i]='E';
			}
		}
		printf("Case #%d: ",j);
		for(int i=0;i<strlen(a);i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
		t--;
		j++;
	}
}