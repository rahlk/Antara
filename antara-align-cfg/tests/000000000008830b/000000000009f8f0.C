#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,k;
	int n,m,N,L;
	int T,t;
	
	int a[1000];
	int p[1000];
	int map[100];
	
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		printf("Case #%d: ", t);
		fscanf(stdin, "%d%d", &N, &L);
		
		for(i=0;i<L;i++)
		{
			fscanf(stdin, "%d", &a[i]);
		}
		
		n=N;
		for(i=2;i<=n;i++)
		{
			if(a[0]%i==0)
			{
				if(a[1]%i==0) {p[0]=a[0]/i; p[1]=i;}
				else {p[0]=i; p[1]=a[0]/i;}
				break;
			}
		}
			
		for(i=2;i<=L;i++)
		{
			p[i]=a[i-1]/p[i-1];
		}
		
		k=0;
		for(i=0;i<=L;i++)
		{
			for(j=0;j<k;j++)
			if(map[j]==p[i]) break;

			if(j==k) 
			{
				map[k]=p[i];
				k++;
			}
		}
		
		for(i=0;i<26;i++)
		for(j=0;j<i;j++)
		if(map[i]<map[j]) 
		{
			k=map[i];
			map[i]=map[j];
			map[j]=k;
		}				
		
		for(i=0;i<=L;i++)
		{
			for(j=0;j<26;j++)
			if(p[i]==map[j]) printf("%c", j+65); 
		}		
		
		
		printf("\n");
		//return 0;
	}
	
	return 0;
}
	