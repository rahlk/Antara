#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int T;
	int A;
	char C[255][501]={0};
	int i;
	int check[3][300]={0};
	int j;
	int k;
	char ans[300]={0};
	char none[300]={0};
	int E[255];
	int fail;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d",&A);
		
		for(j=0;j<A;j++)
		{
			scanf("%s",&C[j][0]);
			E[j] = 0;
			check[0][j] = 0;
			check[1][j] = 0;
			check[2][j] = 0;
		}
		
		fail = 0;
		strcpy(ans,none);
		
		for(k=0;k<A;k++)
		{
			for(j=0;j<A;j++)
			{
				if(E[j])
				{continue;}
				
				if(C[j][k] == 'R')
				{check[0][k] = 1;}
				
				if(C[j][k] == 'P')
				{check[1][k] = 1;}

				if(C[j][k] == 'S')
				{check[2][k] = 1;}
			}
			
			if(check[0][k]+check[1][k]+check[2][k] == 3)
			{
				fail = 1 ;
				break;
			}
			else if(check[0][k]+check[1][k]+check[2][k] == 1)
			{
				if(check[0][k])
				ans[k] = 'P';
				if(check[1][k])
				ans[k] = 'S';
				if(check[2][k])
				ans[k] = 'R';
				
				break;
			}
			else
			{
				if(check[0][k] && check[1][k])
				{
					ans[k] = 'S';
					for(j=0;j<A;j++)
					{
						if(C[j][k] == 'P')
						{E[j] = 1;}
					}
				}
			}
		}
		
		
		
		if(fail)
		printf("Case #%d: IMPOSSIBLE\n",i+1);
		else
		printf("Case #%d: %s\n",i+1,ans);
	}
	
	return 0;
}