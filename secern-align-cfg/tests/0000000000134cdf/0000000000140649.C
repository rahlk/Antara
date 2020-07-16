#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int divide(char*, int , int, int, int, int);
int XOR(int,int);

int main()
{
	int T;
	int R;
	int C;
	int i;
	char grid[15][15];
	int method;
	int j;
	int k;
	int f;
	int u;
	char none;
	
	scanf("%d",&T);


	for(i=0;i<T;i++)
	{
		scanf("%d %d",&R,&C);
		
		for(j=0;j<R;j++)
		{
			for(k=0;k<C;k++)
			{
				scanf("%c",&grid[j][k]);
			}
			scanf("%c",none);
		}
		
		method = 0;
		for(j=0;j<R;j++)
		{
			for(k=0;k<C;k++)
			{
				if(grid[j][k] == '#')
				{break;}
			}
			
			if(k == C)
			{
				f = divide(grid,0,0,i-1,C-1,R);
				u = divide(grid,i+1,0,R-1,C-1,R);
				method += C*XOR(f,u);
			}
		}
		
		for(k=0;k<C;k++)
		{
			for(j=0;j<R;j++)
			{
				if(grid[j][k] == '#')
				{break;}
			}
			
			if(k == R)
			{
				f = divide(grid,0,0,R-1,i-1,R);
				u = divide(grid,0,i+1,R-1,C-1,R);
				method += R*XOR(f,u);
			}
		}
				
		printf("Case #%d: %d\n",i+1,method);	
	}
	
	return 0;
}

int divide(char* grid, int Ra, int Ca, int Rb, int Cb,int R)
{
	int i;
	int j;
	int pos[30];
	int way = 0;
	int result;
	
	for(i=Ra;i<=Rb;i++)
	{
		for(j=Ca;j<=Cb;j++)
		{
			if( *(grid+R*i+j) == '#')
			{break;}
		}
		
		if(j == Cb+1)
		{
			pos[way] = XOR(divide(grid,Ra,Ca,i-1,Cb,R),divide(grid,i+1,Ca,Rb,Cb,R));
			way++;
		}
	}
	
	for(j=Ca;j<=Cb;j++)
	{
		for(i=Ra;i<=Rb;i++)
		{
			if(*(grid+R*i+j) == '#')
			{break;}
		}
		
		if(i == Rb+1)
		{
			pos[way] = XOR(divide(grid,Ra,Ca,Rb,i-1,R),divide(grid,Ra,i+1,Rb,Cb,R));
			way++;
		}
	}
	
	for(i=0;i<way;i++)
	{
		if(pos[i] == 0)
		{
			return 1;
		}
	}
	
	return 0;
}

int XOR(int a,int b)
{
	if( (!a) && b)
	{return 1;}
	if( (!b) && a)
	{return 1;}
	
	return 0;
}