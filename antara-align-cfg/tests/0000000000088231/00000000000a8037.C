#include<stdio.h>
#include <math.h>


unsigned int div (unsigned int n)
{
	unsigned int rem,ten = 1 ;
	while (n>0)
	{
		 
		rem = n % 10  ;
		if(4 == rem )
		{
			ten-- ; 
			

		}
		n = n/10 ;
		ten *= 10 + 1;
	}
	
	return ten ;
}

unsigned int mee(unsigned int n)
{
	unsigned int count = 0;
	while(n>0)
	{
		n /= 10 ;
		count ++ ;
	}
	return count ;
}


long unsigned int last(unsigned int n)
{
	unsigned int i=0 , rem ,ash=1;
	long unsigned int temp=0,c=0;
	while(n>0)
	{
		rem = n %10 ;
		if(rem == 4)
			ash *= 10 + 1  ;
		else
			ash *= 10 + 0  ;
		c++;
		n = n /10 ;
	}
	c=pow(10,c);
	temp=ash-c;
	return temp    ;
} 

void main()
{
	unsigned int t ,k ;
	//printf("enter test:\n");
	scanf("%u",&t);
	for(k=0;k<t;k++)
	{
		unsigned int n;
		//printf("Enter n\n");
		scanf("%u",&n);
		printf("case #%d :",k+1);
		long unsigned int rem = last (n);
		
		printf("%ld %ld\n",rem,n-rem);
	}
	
}