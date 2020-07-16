#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
		int i, j, N;
		scanf("%d",&N);		
		for(i=1; i<N; i++)
		{
			for(j=1; j<N; j++)
			{
				int r, s, flag=0; 
				int temp1=i, temp2=j;
				while(temp1!=0)
				{
				r=temp1%10;
				temp1/=10;
				if(r==4)
				  flag=1; }
				while(temp2!=0)
				{
				s=temp2%10;
				temp2/=10;
				if(s==4)
				  flag=1; }  
				if(flag==0)
				{  
				if(i+j==N)
				printf("Case #%d: %d %d",t,i,j);}
			}
			}
		
		--t;
	}
}
