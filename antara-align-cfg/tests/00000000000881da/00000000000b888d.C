#include<stdio.h>
#include<string.h>
int main()
{
	int t;
scanf("%d",&t);
while(t!=0)
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
	printf("Case #t: %s",str);
t--;}
}
