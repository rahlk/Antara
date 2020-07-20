#include<stdio.h>
#include<string.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	for(long long int i=0;i<n;i++)
	{
		//printf("here\n");
		long long int p;
		scanf("%lld",&p);
		long long int k = 2*p-2;
		char ch[k];
		char c;
		scanf("%c",&c);
		
		for(long long int j=0;j<k;j++)
		{
			scanf("%c",&c);
			if(c=='S')
				ch[j]='E';
			else if(c=='E')
				ch[j]='S';
		}
		printf("Case #%lld: ", i+1);
		for(int r=0;r<k;r++)
			printf("%c",ch[r]);
		printf("\n");
	}
}