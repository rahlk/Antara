#include<stdio.h>
#include<math.h>

int checkNum(unsigned long n)
{
	if(n==4)
	  return 1;
	else return 0;
}

int main()
{
	
	int test, ftest, j, i, len, ret, fin, p;
	unsigned long num , N, A[100], temp, a, b;
	
	
	scanf("%d", &ftest );
	
	for(test=0; test<ftest; test++)
	{
		scanf("%u", &A[test]);
	
	}
	
	for(test=0; test<ftest; test++)
	{
		a = 0;
		b = 0;
		fin = 0;
		//printf("\n\n\t\tTest case number: %d", test+1);
		
	
		num = A[test];
		N = A[test];

		j =0;
		while(N/10!=0)
	    {
		    N = N/10;
		    j++;
	    }
	    j++;
	    len = j;
	    
	    N = num;
	    
		
		for(i=1; i<=len; i++)
		{
			j = num/pow(10, len-i);
			ret = checkNum(j%10);
		     if(ret == 1)
		     {
		     	a = a + 2 * pow(10, len-i);
		     	b = b + 2 * pow(10, len-i);
			 }
			 else
			 {
			 	a = a + (j%10) * pow(10, len-i);
			 }
			
			
		}
		
		printf("\n\t#%d:\t%u\t%u\n\n", test+1, a, b);
		printf("\n\n\n");
	}
	
	return 0;
}