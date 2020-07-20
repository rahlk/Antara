#include <stdio.h>

int main()
{
	long i,j,k;
	long n,m,N,L;
	int T,t;
	int b,c;
	
	long a[1000];
	long p[1000];
	long map[100];
	
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		printf("Case #%d: ", t);
		fscanf(stdin, "%ld%ld", &N, &L);
		
		for(i=0;i<L;i++)
		{
			fscanf(stdin, "%ld", &a[i]);
			p[i]=1;
		}
		

		//for(i=0;i<=L;i++)
		//p[i]=1;

		n=N*N;
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
			//if(p[i-1]==0) continue;
			p[i]=a[i-1]/p[i-1];
		}
		
		/**for(i=0;i<=L;i++)
		{
			printf("%ld %ld %ld\n", i, a[i], p[i]);
		}*/
		
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
		
		for(b=0;b<26;b++)
		for(c=0;c<b;c++)
		if(map[b]<map[c]) 
		{
			k=map[i];
			map[i]=map[j];
			map[j]=k;
		}				
		
		for(i=0;i<=L;i++)
		{
			for(c=0;c<26;c++)
			if(p[i]==map[c]) printf("%c", c+65); 
		}		
		printf("\n");
	}
	
	return 0;
}
