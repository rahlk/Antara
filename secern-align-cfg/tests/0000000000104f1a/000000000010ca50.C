#include<stdio.h>
main()
{
	int a ,b;
	scanf("%d %d",&a,&b);
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=5;j++)
		{
			if (a!=i&&b!=j) 
			{
				a=a+1;
				b=b+1;
				if( a!=i&&b!=j)
				{
					a=i;
					b=j;
					printf("%d \t %d",i,j);
				}
				
			}
		}
	}
		
		
	
}