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
	//variable declarations
	int test, ftest, j, i, len, ret, fin, p;
	unsigned long num , N, A[6], B[6], temp, a, b;
	
	//taking number of test cases
	printf("\nEnter the number of test cases:?\b");
	scanf("%d", &ftest );
	
	//looping to get the required number of test cases
	for(test=0; test<ftest; test++)
	{
		a = 0;
		b = 0;
		fin = 0;
		printf("\n\n\t\tTest case number: %d", test+1);
		
		//taking the cheque amount
		printf("\n\nEnter the cheque amount in the specified range: ?\b", j);
		scanf("%u", &N);
		num = N;
		p = (int)N;
		
		//checking for unwanted cases
		if(p<1 || p>100000*pow(10,test*4))
		{
			printf("\n\nThe Entered number is not in the specified limit");
			printf("\n\nEnter the number in the given limit\n");
			printf("\n\n\n");
			continue;
		}
		
		//getting the length of the given in terms of position
		j =0;
		while(N/10!=0)
	    {
		    N = N/10;
		    j++;
	    }
	    j++;
	    len = j;
	    //printf("\nThe length is %d", len);
	    N = num;
	    
	    //checking whether number has 4 or not
	    
	    for(i=1; i<=len; i++)
	    {
	    	j = num/pow(10, len-i);
			ret = checkNum(j%10);
		     if(ret == 1)
		     {
		     	fin = 1;
			 }
		}
		
		if(fin ==0)
		{
			printf("\n\nThe given number doesn't contain 4\n");
			printf("\n\n\n");
			continue;
		}
	    
		//logic for getting 2 cheque values A and B
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
			//printf("A[%d] = %u\n", i, a);
			//printf("B[%d] = %u\n", i, b);
			
		}
		
		printf("\n\nThe two cheque values A and B are\n");
		printf("\n\t#%d:\t%u\t%u\n\n", test+1, a, b);
		printf("\n\n\n");
	}
	
	return 0;
}
