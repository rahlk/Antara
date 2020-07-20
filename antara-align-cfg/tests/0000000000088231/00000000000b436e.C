#include<stdio.h>
#include <math.h>


int div (int n)
{
	int rem,ten = 0,rev = 0 ;
	//int len = count(n);
	while (n!=0)
	{
		 
		rem = n % 10  ;
		if(4 == rem )
		{
			ten  = (ten*10) + 1 ;
		}
		else
		{
			ten  = (ten *10) + 2 ;
			ten ++ ;
		}
		n = n/10 ;
		//ten *= 10 + 1;
	}
	
	return ten ;
}

int count (int n)
{
	int c = 0 ;
	while(n!=0)
	{
    n = n/10;
    c ++;
 	}
	return c ;
}


int last(int n)
{
	int i=0 , rem ,ash=1;
	int temp=0,c=0;
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
	int t ,k ;
	printf("enter test:\n");
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int n;
		printf("Enter n\n");
		scanf("%d",&n);
		printf("case #%d :",k+1);
		int rem = div(n);
		
		printf("%d %d\n",rem,n-rem);
	}
}
