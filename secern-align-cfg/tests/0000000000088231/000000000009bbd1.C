#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkDigits(long long a , long long b)
{
	int temp;

	while(a > 0)
	{
		temp = a%10;
		a= a/10;
		if(temp == 4)
			return 1;
	}

	while(b > 0)
	{
		temp = b%10;
		b= b/10;
		if(temp == 4)
			return 1;
	}

	return 0;
}

long long Func(long long n)
{
	int temp = 0;
	int pow_counter = 0;

	while(n > 0)
	{
		int temp2 = n%10;
		n = n/10;
		if(temp2 == 4)
		{
			temp = temp+pow(10,pow_counter);
		}
		pow_counter++;
	}
	return temp;
}


int main()
{
	int counter;
	long long n;
	int r;
	r = scanf("%d",&counter);
	long long m;
	int i = 0;



	while(counter > 0)
	{
		r = scanf("%lld",&n);

		//Getting the Initial Value
		m = Func(n);//To skip Some Cases
		n = n-m;

		while(checkDigits(n,m) != 0 && n > 0 && m > 0)
		{
			n--;
			m++;
		}

		//If n < 0 ,then it means the cases that we skipped had answers 
		if(n < 0)
		{
			n = n+m;
			m = 0;

			while(checkDigits(n,m) != 0 && n > 0 && m > 0)
			{
				n--;
				m++;
			}
		}
		
		printf("Case #%d: %lld %lld\n",i+1,n,m);

		counter--;
		i++;
	}

	return 0;
}