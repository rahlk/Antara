#include<stdio.h>
int main()
{
	long int i=0,j=0,k=0,l=0,T,N,sum=0;
	
	scanf("%ld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%ld",&N);
	    char s[N];
		scanf("%s",&s);
		printf("Case #%ld: ",i+1);
		sum=(2*N-2);
		
		for(j=0;j<=sum;j++)
		{
			if(s[j]=='S')
			printf("E");
			else if(s[j]=='E')
			printf("S");
			}	
			printf("\n");
		
	}
//	return 1;
}