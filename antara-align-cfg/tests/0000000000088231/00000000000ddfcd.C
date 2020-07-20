#include<stdlib.h>
#include<math.h>

int main()
{
   	long int a, T;
	scanf("%ld",&T);
	for(int i=0;i<T;i++)
	{	
	    long int temp,temp1,factor=1,q,c,sum=0,d,b;
		scanf("%ld",&a);
		temp1=a;
		temp=a;
		while(temp)
			{

      			temp=temp/10;

      			factor = factor*10;

			}
		  while(factor>1)
			{
      				factor = factor/10;
				q=a/(factor);
				c=q/2;
				if(c==4)
      				c=2;
					
				sum=sum*10+c;
				
      				a = a % factor;

  			}
		d=temp1-sum;
		b=sum;
		printf("Case #%ld: %ld %ld\n",i+1,d,b);
		//sum=0;	

	}
	return(0);
}
