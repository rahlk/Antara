#include<stdio.h>
#include<string.h>

void reduce(char* A, char* B, char* N, int n)
{
	int i;
	int start = 1;
	int first;
	strcpy(A,N);
		
	for(i=0;i<n;i++)
	{
		if( *(A+i) == '4')
		{
			while(start)
			{
				start = 0;
				first = i;
			}
			
			*(A+i) = '3';
			
			*(B+i-first) = '1';
		}
		
		else
		{
			if(!start)
			*(B+i-first) = '0';

		}

	}
}

int main()
{
	int T;
	char N[100]={0};
	char A[100]={0};
	char B[100]={0};
	char none[100]={0};
	int n;
	int i;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%s",N);
		n = strlen(N);
		reduce(A,B,N,n);
		//printf("%s\n",A);
		//printf("%s\n",B);
		
		printf("Case #%d: %s %s\n",i+1,A,B);
		
		//printf("%s\n",none);
		strcpy(A,none);
		strcpy(B,none);
	}
	
	return 0;
}