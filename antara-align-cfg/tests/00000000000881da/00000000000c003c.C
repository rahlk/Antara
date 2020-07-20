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