#include<stdio.h>
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
		long int n;
		//printf("Enter n\n");
		scanf("%ld",&n);
		printf("case #%d :",k+1);
		int rem = divi(n);
		
		printf("%ld %ld\n",rem,n-rem);
	}
	return 0 ;
}
