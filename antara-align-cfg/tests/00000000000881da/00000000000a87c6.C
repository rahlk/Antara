#include<stdio.h>
int main()
{
	long long int i,j,k,l,T,N;
	
	scanf("%ld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%ld",&N);
	    char s[N];
		scanf("%s",&s);
		printf("Case #%lld: ",i+1);
		for(j=0;j<=(2*N-2);j++)
		{
			if(s[j]=='S')
			printf("E");
			else if(s[j]=='E')
			printf("S");
			}	
			printf("\n");
		
	}
}