#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inverse(char* T,char* T_bar,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(*(T+i) == 'E')
		{
			*(T_bar+i) = 'S';
		}
		else
		{
			*(T_bar+i) = 'E';
		}
	}
	*(T_bar+i) = 0; 
}

int main()
{
	int T;
	int N;
	char* trace;
	char* trace_mine;
	int i;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d",&N);
		
		trace = (char*)malloc(sizeof(char)*(2*N-2));
		trace_mine = (char*)malloc(sizeof(char)*(2*N-2));		
		
		scanf("%s",trace);
		
		inverse(trace,trace_mine,2*N-2);
		
		printf("Case #%d: %s\n",i+1,trace_mine);
		
		free(trace);
		free(trace_mine);
	}
	
	return 0;
}