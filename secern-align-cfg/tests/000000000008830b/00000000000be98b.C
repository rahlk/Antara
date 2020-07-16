// Cryptopangrams
#include <stdio.h>
#include <stdlib.h>
long long int binarySearch(long long int values[], long long int len, long long int target)
{
    int max = (len - 1);
    int min = 0;
    
    int guess;  // this will hold the index of middle elements
    int step = 0;  // to find out in how many steps we completed the search
    
    while(max >= min)
    {
        guess = (max + min) / 2;
        // we made the first guess, incrementing step by 1
        step++;
        
        if(values[guess] ==  target)
        {
         //   printf("Number of steps required for search: %d \n", step);
            return guess;
        }
        else if(values[guess] >  target) 
        {
            // target would be in the left half
            max = (guess - 1);
        }
        else
        {
            // target would be in the right half
            min = (guess + 1);
        }
    }
 
    // We reach here when element is not 
    // present in array
    return -1;
}

long long int mcd ( long long int num1, long long int num2 )
{
	long long int a;
	long long int b;
	long long int r;
	
	if ( num1 > num2 )
	{
		a = num1;
		b = num2;
	}
	else
	{
		a = num2;
		b = num1;
	}
	
	do
	{
		r = b;
		b = a%b;
		a = r;
	} while ( b != 0 );
	
	return r;
}

int main()
{
	long long int t;
	scanf("%lld", &t);
	long long int k = 1;
	do
	{
		
		long long int N;
		long long int L;
		scanf("%lld %lld", &N, &L);
		long long int i, j;
		long long int product[L];
		
		for ( i = 0; i < L; ++i )
		{
			scanf("%lld", &product[i]);
		}
		
		long long int alfa[L+1];
		long long int beta[L+1];
		long long int gamma[26];
		
		alfa[1] = mcd(product[0],product[1]);
		beta[1] = alfa[1];
		alfa[0] = product[0]/alfa[1];
		beta[0] = alfa[0];
		for ( i = 2; i <= L; ++i )
		{
			alfa[i] = product[i-1]/alfa[i-1];
			beta[i] = alfa[i];
		}
		
		long long int m, aux;
		for ( i = 0; i <= L; ++i )
		{
			m = i;
			for ( j = i; j <= L; ++j )
			{
				if ( beta[j] < beta[m] )
				{
					m = j;
				}
			}
			aux = beta[m];
			beta[m] = beta[i];
			beta[i] = aux;
		}
		
//		for ( i = 0; i <= L; ++i )
//		{
//			printf("%lld ", beta[i]);
//		}
		long long int c = 1;
		gamma[0] = beta[0];
		for ( i = 1; i <=L; ++i )
		{
			if ( beta[i]!=beta[i-1])
			{
				gamma[c] = beta[i];
				++c;
			}
		}
//		printf("\n");
//		for ( i = 0; i < c; ++i )
//		{
//			printf("%lld ", gamma[i]);
//		}
		
		char mensaje[L+1];
		long long int flag;
		for ( i = 0; i <= L; ++i )
		{
			flag = binarySearch(gamma,26,alfa[i]);
			mensaje[i] =(char) flag+65;
		}
//		printf("\n");
		printf("Case #%lld: ", k);
		for ( i = 0; i <= L; ++i )
		{
			printf("%c", mensaje[i]);
		}
		printf("\n");
		++k;
	} while ( k != t+1 );
}