#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long allocate[26];

void Swap(long long* a , long long* b)
{
	long long temp = *a;
	*a = *b;
	*b = temp;
}

void Sort(long long* arr,long long n)
{
	for(long long i = 0 ; i < n-1; i++)
	{
		for(long long j = 0 ; j < n-i-1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				Swap(&arr[j],&arr[j+1]);
			}

		}
	}
}

int main()
{
	long long counter;
	long long n,l;
	long long r;
	r = scanf("%lld",&counter);
	long long m;
	long long index1 = 1;


	while(counter > 0)
	{
		r = scanf("%lld",&n);
		r = scanf("%lld",&l);

		long long* arr = calloc(l,sizeof(long long));
		long long* alphabets = calloc(l+1,sizeof(long long));
	    long long* inputarr = calloc(l+1,sizeof(long long));
		char* inputarr2 = calloc(l+2,sizeof(char));

		for(long long i = 0 ; i < l ; i++)
		{
			r =  scanf("%lld",&arr[i]);
		}

		long long two = 2;
		if((arr[0]%two) == 0)
		{
			alphabets[0] = 2;
		}
		else
		{
			for(long long j = 3 ; j <= n ; j = j+2)
			{
				if(arr[0]%j == 0)
				{
					alphabets[0] = j;
					break;
				}
			}

			if(alphabets[0] == 0)
				alphabets[0] = 1;
		}

		for(long long i = 0 ; i < l ; i++)
		{
			alphabets[i+1] = (arr[i]/alphabets[i]);
		}

		for(long long i = 0 ; i < l+1; i++)
		{
			inputarr[i] = alphabets[i];
		}

		Sort(alphabets,l+1);

		long long prev = alphabets[0];
		allocate[0] = prev;
		long long alpha_count = 1;

		for(long long i = 1 ; i < l+1 ; i++)
		{
			if(prev != alphabets[i])
			{
				allocate[alpha_count] = alphabets[i];
				prev = alphabets[i];
				alpha_count++;
			}
		}

		
		for(long long i = 0 ; i < l+1 ;i++)
		{
			for(long long j = 0 ; j < 26 ; j++)
			{
				if(inputarr[i] == allocate[j])
				{
					inputarr2[i] = 65+j;
					break;
				}
			}
		}

		inputarr2[l+1] = '\0';
		printf("Case #%lld: %s\n",index1,inputarr2);
		

		index1++;
		counter--;
	}

	return 0;
}