#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	
	int i;
	for(i=0;i<test;++i)
	{
		int rows,columns;
		scanf("%d %d",&rows,&columns);
		
		int array[rows+1][columns+1]={0},count=rows*columns;
		int r=1,c=1;
		while(count>0)
		{
			int temp1,temp2;
			printf("%d %d\n",r,c);
			array[r][c]=1;
			temp1=r;
			temp2=c;
			int diff=r-c;
			r=2;
			c=3;
			for(r=1;r<=rows;++r)
			{
				if(r==temp1)
					continue;
				for(c=1;c<=columns;++c)
				{
					if(c==temp2 )
					continue;	
				 	
					if(array[r][c]==0 && r-c!=temp1-temp2 && r+c!=temp1+temp2)
					break;	
					
				}
				if(array[r][c]==0 && r-c!=temp1-temp2 && r+c!=temp1+temp2)
				{
					break;	
				}
			}
			count--;
		}
	}
}