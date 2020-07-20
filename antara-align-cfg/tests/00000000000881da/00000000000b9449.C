// You can go your own way
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	long long int t;
	scanf("%lld", &t);
	long long int k = 1;
	
	do
	{
		long long int p;
		scanf("%lld", &p);
		
		char w[2*p];
		scanf("%s", &w);
		long long int tam = strlen(w);
		char r[tam];
		long long int i;
		for ( i = 0; i < tam; ++i )
		{
			
			if ( w[i] == 'S')
			{
				r[i] = 'E';
			}
			else
			{
				r[i] = 'S';
			}
		}
		
		printf("Case #%lld: ", k);
		for ( i = 0; i < tam; ++i )
		{
			printf("%c", r[i]);
		}
		printf("\n");
		
		++k;
	} while ( k != t+1);
}