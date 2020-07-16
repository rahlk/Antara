#include<stdio.h>

int main()
{
	int N,c,z,i,r,temp;
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		scanf("%d",&N);
		z=N;
		z=z/2;
		temp=z;
		while(z>0)
		{
			r=z%10;
			z=z/10;
			
		}
		if(r==4)
			{
				temp=temp/10;
				temp=temp-c;
				temp=temp*2;
				printf("case #%d: %d\t\t%d\n",i,N-temp,temp);
			}
			else
				printf("case #%d: %d\t\t%d\n",i,temp,temp);
	}
	
}
