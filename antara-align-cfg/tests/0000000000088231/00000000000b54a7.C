#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int n,t[105],r=0;
int find(int a)
{
	r=0;
	char buffer[10];
	itoa(a,buffer,10);
	int l=strlen(buffer);
	for(int i=0;i<l;i++)
	{
		if(buffer[i]=='4')
		{
		 	r+=pow(10,l-i-1);
		}
	}
	return r;
}

main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("Case #%d: %d %d\n",i+1,t[i]-find(t[i]),find(t[i]));
	}
	return 0;
}
