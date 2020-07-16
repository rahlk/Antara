#include <stdio.h>
#include <math.h>

int main()
{
	int n,arr[100],i,j,flag,flagB,p,A,B,x,clone,r1,num;


	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		flag=1;
		clone=arr[i];
		while(clone>9)
			{
				clone=clone/10;
				flag++;
			}		
			p= pow(10,flag-1);
			for(j=1;j<=arr[i];j++)
		{	
			if( j >= 40 && j<= 49 )
			{
				if(j>=400 && j<=499)
				
				if(j>=4000 && j<=4999)
				if(j>=40000 && j<=49999)
				if(j>=400000 && j<=499999)
				if(j>=4000000 && j<=4999999)
				if(j>=40000000 && j<=49999999)
				if(j>=400000000 && j<=499999999)
				if(j>=4000000000 && j<=4999999999)
				if(j>=40000000000 && j<=49999999999)
				continue;
				continue;
				continue;
				continue;
				continue;
				continue;
				continue;
				continue;
				continue;
		    }
			else{	
				
					A=j;
					x=A;
					num=0;
					while(x>0)
					{
							r1=x%10;
							x=x/10;
						
							if(r1==4)
								num++;
						
					}
					
				if(num==0)	
				{
				
					B=arr[i]-j;
					x=B;
					flagB=1;
					while(x>9)
					{
						x=x/10;
						flagB++;
					}
					x=B;
					while(x>0)
					{
							r1=x%10;
							x=x/10;
						
							if(r1==4)
								break;
							else 
								num++;
						
					}	
				}
			}
				
			if(num==flagB)
				{
				printf("\nCase #%d: %d %d",i+1,A,B);
				break;
				}
		}
	}
	
	
	return 0;
}