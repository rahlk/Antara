#include <stdio.h>
#define ll long long
int main() 
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		char str[2*n-1];
		scanf("%s",str);
		for(int i=0;i<2*n-1;i++)
			str[i]=='E'?str[i]='S':(str[i]='E');
		printf("%s\n",str);
	}	
}