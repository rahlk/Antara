#include<stdio.h>
main()
{
	int mat[20][20] ,a ,b;
	scanf("%d %d",&a,&b);
	for (int i=1;i<=20;i++)
	{
		for (int j=0;j<20;j++)
		{
			if (a!=i&&b!=j) 
			{
				printf("%d \t %d",i,j);
			}
		}
	}
		
		
	
}