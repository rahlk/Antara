#include<stdio.h>
void main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	for(int l=0;l<t;l++)
	{
		scanf("%lli",&n);
		for(long long int i=1;i<n;i++)
		{
		
			int flag=0;
			int flag2=0;
			int count = 0;
			 long long int x = i;

				while (x != 0)
				{
					x /= 10;
					count++;
				}
				int number1Array[count];
				if(count!=0){
				   

				   count = 0;    
				   x = i;

				   while (x != 0){
					   number1Array[count] = x % 10;
					   x /= 10;
					   count++;
				   }
				}
				for(int j=0;j<count;j++)
				{
					if(number1Array[j]==4)
					{ flag2=1;
					break;}
					}
					if(flag2==1)
						{continue;}
							
			int count2 = 0;
			long long int y = n-i;

				while (y != 0)
				{
					y /= 10;
					count2++;
				}
				int number2Array[count2];
				if(count2!=0){
				   

				   count2 = 0;    
				   y =n-i;

				   while (y != 0){
					   number2Array[count2] = y % 10;
					   y /= 10;
					   count2++;
				   }
				}
					for(int k=0;k<count2;k++)
				{
					if(number2Array[k]==4){
					 flag=1;
					break;}
				}
				if(flag==1)
				continue;
				else if(flag==0){
				printf("Case #%d: %lli %lli\n",l+1,i,n-i);
				break;
				}
			}
		}
		}
		
		
				
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					