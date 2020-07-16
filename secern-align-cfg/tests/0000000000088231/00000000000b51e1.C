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
		else if(5 == rem)
		{
			ten  = (ten *10) + 3 ;
			ten ++ ;
		}
		else
			ten  = (ten *10) + 3 ;
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

int check(int a,int b)
{
	int rem1,rem2  ;

	while(a || b)
	{
		rem1 = a % 10 ;
		rem2 = b % 10 ;
		if(rem1 == 4 || rem2 == 4)
			return 0 ;
		a /= 10 ;
		b /= 10 ;
	}
	return 1 ;
}

int divi(int n)
{
	int mid = n/2 ;
	int i , j , k ;
	while(mid)
	{
		int c = check(n-mid,mid) ;
		if(c)
			return mid ;
		mid-- ;
	}
	return n - 10101 ;

}
 
int main()
{
	int t ,k ;
//	printf("enter test:\n");
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int n;
		//printf("Enter n\n");
		scanf("%d",&n);
		printf("case #%d :",k+1);
		int rem = divi(n);
		
		printf("%d %d\n",rem,n-rem);
	}
	return 0 ;
}
