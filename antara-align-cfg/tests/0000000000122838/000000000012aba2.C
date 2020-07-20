#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

long long int method(int *a, int *b, int l, int K)
{
	int i;
	int max_1 = 0;
	int pos_1 = 0;
	int max_2 = 0;
	int pos_2 = 0;
	long long int max;
	long long int pos;
	long long int left = -1;
	long long int right = l;
	long long int part;
	
	if(l == 1)
	{
		if(abs(*a - *b)<=K)
		return 1;
		else
		return 0;
	}

	for(i=0;i<l;i++)
	{
		if(max_1 < *(a+i))
		{
			max_1 = *(a+i);
			pos_1 = i;
		}

		if(max_2 < *(b+i))
		{
			max_2 = *(b+i);
			pos_2 = i;
		}
	}
	
	if(max_1 >= max_2)
	{
		max = max_1;
		pos = pos_1;
		
		for(i=pos;i>-1;i--)
		{
			if(max - *(b+i) <= K)
			{
				left = i;
				break;
			}
		}

		for(i=pos;i<l;i++)
		{
			if(max - *(b+i) <= K)
			{
				right = i;
				break;
			}
		}
	}
	else
	{
		max = max_2;
		pos = pos_2;
		
		for(i=pos;i>-1;i--)
		{
			if(max - *(a+i) <= K)
			{
				left = i;
				break;
			}
		}

		for(i=pos;i<l;i++)
		{
			if(max - *(a+i) <= K)
			{
				right = i;
				break;
			}
		}
	}
	
	if(left == -1 && right == l)
	{part = 0;}
	else if(left != -1 && right != l)
	{part = (pos+1) * (l - pos) - (pos - left) * (right - pos);}
	else if(left == -1)
	{part = (pos + 1)*(l - right);}
	else
	{part = (left + 1)*(l - pos);}
	
	if(pos != l-1 && pos != 0)
	return method(a, b, pos ,K) + part + method(a+pos+1, b+pos+1, l-1-pos, K);
	else if(pos == l-1)
	return method(a, b, pos ,K) + part;
	else
	return part + method(a+pos+1, b+pos+1, l-1-pos, K);
}

int main()
{
	int T;
	int N;
	int K;
	int *C;
	int *D;
	int i;
	int j;
	long long int ans;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{	
		scanf("%d %d",&N,&K);
		
		C = (int*)malloc(sizeof(int)*N);
		D = (int*)malloc(sizeof(int)*N);
		
		for(j=0;j<N;j++)
		{scanf("%d",C+j);}
		
		for(j=0;j<N;j++)
		{scanf("%d",D+j);}
		
		ans = method(C, D, N, K);
		
		printf("Case #%d: %lld\n",i+1,ans);
		
		free(C);
		free(D);
	}
	
	return 0;
} 