#include <stdio.h>
#include<string.h>
int main(void)
{
	int t,z=1;
	scanf("%d",&t);
	while(t--)
	{
		int i,l;
		long long int n;
		char str[50001],q[50001];
		scanf("%lld%s",&n,&str);
		l=strlen(str);
		printf("Case #%d: ",(z++));
		for(i=0;i<l;i++)
		{
			if(str[i]=='E')
				q[i]='S';
			else
				q[i]='E';
		}
		puts(q);
	}
	return 0;
}