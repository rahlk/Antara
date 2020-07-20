#include<stdio.h>
int main()
{
	long long int i,j,k,l,T,N,sum;
	
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&N);
	    char s[N];
		scanf("%s",&s);
		printf("Case #%lld: ",i+1);
		sum=(2*N-2);
		j=0;
		while(s[j]!='\0')
		{
			if(s[j]=='S')
			printf("E");
			else if(s[j]=='E')
			printf("S");
			j++;
			}	
			printf("\n");
		
	}
//	return 1;
}