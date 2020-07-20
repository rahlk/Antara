#include <stdio.h>
int main() 
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		char str[2*n-1];
		scanf("%s",str);
		for(int i=0;i<2*n-2;i++)
		{
		    if(str[i]=='E')
			    str[i]='S';
			else
			    str[i]='E';
	    }
		printf("%s\n",str);
	}	
}