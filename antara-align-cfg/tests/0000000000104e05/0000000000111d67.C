#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void inverse(char* x, int L)
{
	char a[50]={0};
	int i;
	
	strcpy(a,x);
	
	for(i=0;i<L;i++)
	{
		*(x+i) = *(a+L-i-1);
	}
}

int com(char* x, char* y)
{
	int i=0;
	while(*(x+i) = *(y+i))
	{i++;}
	
	return i;
}


int main()
{
	int T;
	int N;
	int i;
	int j;
	int k;
	char W[51000];
	char none[51000]={0};
	int num[1000];
	int total;
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d",&N);
		
		strcpy(W,none);
		
		for(j=0;j<N;j++)
		{
			scanf("%s",W+(51*j));	
			inverse(W+(51*j) , strlen(W+(51*j)));
		}
		
		for(j=0;j<N;j++)
		{
			for(k=j+1;k<N;k++)
			{
				if(num[j] < com(W+(51*j),W+(51*k)))
				{num[j] = com(W+(51*j),W+(51*k));}

				if(num[k] < com(W+(51*j),W+(51*k)))
				{num[k] = com(W+(51*j),W+(51*k));}
			}
		}
		
		total = 0;
		for(j=0;j<N;j++)
		{
			for(k=j+1;k<N;k++)
			{
				if(num[j]==num[k] && num[j]>0)
				{
					num[j]= 0;
					num[k]= 0;
					total +=2;
				}
			}
		}
		
		printf("Case #%d: %d",i+1,total);
	}
	
	return 0;
} 