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
			if( j >= (4*p)  &&  j<= (4*p) + (p-1) )
			{
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