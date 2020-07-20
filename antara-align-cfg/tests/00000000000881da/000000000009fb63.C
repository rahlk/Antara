#include<stdio.h>
#include<stdlib.h>
int main()
{

	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long int l;
		scanf("%ld",&l);
		long int n=(2*l)-1;
		char s[n];
		scanf("%s",s);
		for(long int i=0;i<n-1;i++)
		{
			if(s[i]=='S')
			{
				s[i]='E';
			}
			else
			{
				s[i]='S';
			}
		}
		printf("Case #%d: %s\n",i+1,s);
	}
}