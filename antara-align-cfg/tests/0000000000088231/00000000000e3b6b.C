#include<stdio.h>
#include<math.h>

char num[6] = {0};
unsigned long A = 0,B = 0;
static int c = 0;
static int i = 0;
//unsigned long arr[5] = {0};

int main()
{
	unsigned int T = 0;	//number of testcases
	unsigned long N = 0;	//the integer N

	scanf("%d",&T);
	while(T--)
	{
		scanf("%ld",&N);

		//identify no. of digits
		//seperate individual digits; store in char array
		//search for number 4
			//exit if not found
			//else -> find A & B
		
		//logic
		int w = numOfDigit(N);

	if(w != -1)
	printf("%ld %ld\n", A,B);

	//reset
	A = 0; B = 0; 
	c = 0; i = 0;
	for(int j=0;j<=5;j++)
num[i] = 0;

		
	}//while T--
	return 0;
}

int numOfDigit( unsigned long number)
{
	unsigned long no = number;
	
	long y = 0;
	int size  = 0;
	unsigned long x = 0;
	
	while(number > 0)
	{	
		num[size++] = (number%10)+48;
		number = number/10;
	}
	//check for 4
	for( i=(size);i>= 0;i--)
	{
		x = A;
		if((i == 0)&&(num[i] == '4'))
		{
                        if(c==0)
                        x = no;
			A = x - 1 ;
			B = B+1;
			return 0;
		}
		if(num[i] == '4')
		{
			if(c == 0){
				x = no;
				c = 1;
			}
			else
				x = A;

			    A = (x - pow(10,i));
                            B = B +(pow(10,i));
    
                }
		else 
			y++;
	}	

	if((y-1) == size)
		return -1;
	return 0;
}