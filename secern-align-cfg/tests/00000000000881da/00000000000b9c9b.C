#include<stdio.h>
#include<string.h>
int main()
{
	int t, k; 
scanf("%d",&t);
for(k=1; k<=t; k++)
{
	int n, i; char str[100];
	scanf("%d",&n);
	scanf("%s",str);
	for(i=0; i<strlen(str); i++ )
	{
		if(str[i]=='E')
		{
			str[i]='S';
	}
		else
			if(str[i]=='S')
		{
			str[i]='E';
		}
		
	}
	
	printf("Case #%d: %s\n",k, str);
	}
}

