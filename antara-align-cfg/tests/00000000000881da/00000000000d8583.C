#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int t;
	scanf("%d",&t);
	char *str[t];
	int s[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d",&s[i]);
		str[i]=(char *)malloc((2*s[i]-2)*sizeof(char));
		scanf("%s",str[i]);
	}
	int j,k;
	char *res;
	for(j=0;j<s[j];j++)
	{
		res=(char *)malloc((2*s[j]-2)*sizeof(char));
		for(k=0;k<2*s[j]-2;k++)
		{
			if(str[j][k]=='S')
				res[k]='E';
			else
				res[k]='S';
		}
		printf("Case #%d: %s\n",(j+1),res);
		if(j==t-1)
			break;
	}
}
