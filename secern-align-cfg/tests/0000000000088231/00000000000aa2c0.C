#include<stdio.h>

int search(int num)
{

	int digit;
	while(num != 0)
	{
	   digit = num % 10;
	   if(digit == 4)
	   {
		return -1;
	   }
	   num=num/10;

	}

}
void print(int a ,int b,int j)
{

	printf("Case # %d : %d %d",j+1,a,b);

}
int main(void)
{
	int i,test,number,j,tempnumber,result,remain,result2;
	
	printf("Enter Test Cases:\n");
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{

		printf("\nEnter Number:\n");
		scanf("%d",&number);
		tempnumber = number;
		for(j=0;j<tempnumber;j++)
		{
		  number =number -1 ;
		  result=search(number);
		  if(result != -1)
		  {
		       remain = tempnumber - number;

		       result2 = search(remain);

		       if(result2 != -1)
		       {
			   print(number,remain,i);
			   break;
		       }
		  }

		}

	}

   return 0;
}

