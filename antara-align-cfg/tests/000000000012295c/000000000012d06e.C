#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	for(int i =0;i<test;++i)
	{
		int P=0,Q=0,num=0;
		char angle;
		scanf("%d %d",&P,&Q);
		num=Q+1;
		int array[num][num];
		for(int m =0;m<=Q;++m)
		{
			for(int n =0;n<=Q;++n)
			{
				array[m][n]=0;
				
			}
		}
		
		int num1=0,num2=0;
		for(int j=0;j<P;++j)
		{
			scanf("%d %d %c",&num1,&num2,&angle);
			if(angle=='N')
			{
				++num2;
				
				for(int k=0;k<=num1;++k)
				{
					++array[k][num2];
				}
			}
			else if(angle=='S')
			{
				--num2;
				for(int l=num2;l>=0;--l)
				{
					for(int k=0;k<=num1;++k)
					{
						++array[k][l];
					}
				}
			}
			else if(angle=='E')
			{
				++num1;
				for(int k=0;k<=num2;++k)
				{
					++array[num1][k];
				}
			}
			else if(angle=='W')
			{
				--num1;
				for(int l=num1;l>=0;--l)
				{
					for(int k=0;k<=num2;++k)
					{
						++array[l][k];
					}
				}
			}
			
		}
		int max=0,m_max=0,n_max=0;
		for(int m =0;m<=Q;++m)
		{
			for(int n =0;n<=Q;++n)
			{
				if(array[m][n]>max)
				{
					m_max=m;
					n_max=n;
					max=array[m][n];
				}	
			}
		}
		printf("Case #%d: %d %d\n",i+1,m_max,n_max);
	}
	return 0;
}