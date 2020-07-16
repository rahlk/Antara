#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k,m;
	int N,K;
	int T,t;
	int C[100001], D[100001];
	int max_c,max_d;
	int count;
		
	
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		fscanf(stdin, "%d%d", &N, &K);
		for(i=0;i<N;i++) fscanf(stdin, "%d", &C[i]);
		for(i=0;i<N;i++) fscanf(stdin, "%d", &D[i]);
		
		count=0;
		for(i=0;i<N;i++)
		{
			max_c = C[i];
			max_d = D[i];
			
			for(j=i;j<N;j++)
			{
				if(C[j]>max_c) max_c=C[j];
				if(D[j]>max_d) max_d=D[j];
				
				if(abs(max_c-max_d)<=K) count++; 
			}
		}
		
		printf("Case #%d: %d\n", t, count);
	}
	return 0;
}
	