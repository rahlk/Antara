#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	long long int t;
	scanf("%lld", &t);
	long long int k = 1;
	
	do
	{
	//	long long int n;
	//	scanf("%lld", &n);
		char num[1000];
		scanf("%s", &num);
		long long int tam = strlen(num);

		long long int i;
		char a[tam];
		char b[tam];
		
		for ( i = 0; i < tam; ++i )
		{
			if ( num[i] != '4' )
			{
				a[i] = num[i];
				b[i] = '0';
			}
			else
			{
				a[i] = '2';
				b[i] = '2';
			}
		}
		long long int cero = 0;
		for ( i = 0; i < tam; ++i )
		{
			printf("%c",a[i]);
		}
		printf(" ");
		for ( i = 0; i < tam; ++i )
		{
			if ( b[i] != '0' && cero == 0)
			{
				cero = 1;
			}
			
			if ( b[i] != '0' || (b[i] == '0' && cero == 1))
			{
				printf("%c", b[i]);
			}
			
		}
		printf("\n");
	

		
		++k;
	} while ( k != t+1 );
}