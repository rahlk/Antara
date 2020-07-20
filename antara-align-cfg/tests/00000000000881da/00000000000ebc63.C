#include <stdio.h>
#include <string.h>
int main()
{
	long long int T,l,n;
	char str[50002];
	scanf("%lld",&T);
	for (long long int i = 1; i <= T; ++i)
	{
		scanf("%lld",&n);
		scanf(" %s",str);
		l=strlen(str);
		for (int i = 0; i < l; ++i)
		{
			if(str[i]=='S')
				str[i]='E';
			else
				str[i]='S';
		}
		printf("Case #%lld: %s\n",i,str);
	}
}