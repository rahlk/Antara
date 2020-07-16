#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 10000

void main()
{
   	int a[max],T,temp,temp1,factor=1,q,c,sum=0,d,b;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<T;i++)
	{	
		temp=a[i];
		temp1=a[i];
		  while(temp)
			{

      			temp=temp/10;

      			factor = factor*10;

			}
		  while(factor>1)
			{
      				factor = factor/10;
				q=a[i]/(factor);
				c=q/2;
				if(c==4)
      				c=2;
					
				sum=sum*10+c;
				
      				a[i] = a[i] % factor;

  			}
		d=temp1-sum;
		b=sum;
		printf("Case #%d: %d %d\n",i+1,d,b);
		sum=0;	

	}
	
}
