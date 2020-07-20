#include<stdio.h>
int checkPrime(int n)
{
    int i, isPrime = 1;

    for(i = 2; i <= n/2; ++i)
    {
	if(n % i == 0)
	{
	    isPrime = 0;
	    break;
	}
    }

    return isPrime;
}
void main()
{
    long long n;
    int count = 0,A,B,N,T,i,flag = 0;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    if (n>0)
    {
	while(n != 0)
	{
	    n /= 10;
	    count++;
	}
	printf("Number of digits: %d", count);
	n=A;
	for(i = 2; i <= A/2; ++i)
	{
	    if (checkPrime(i) == 1)
	    {
		if (checkPrime(A-i) == 1)
		{
		    printf("%d = %d + %d\n", A, i, A - i);
		    flag = 1;
		}

	    }
	}
    if (flag == 0)
    {
	printf("%d cannot be expressed as the sum of two prime numbers.", n);
    }

}
}

