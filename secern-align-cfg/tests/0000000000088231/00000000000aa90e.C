#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--){
		int n=1;
		long int N;
		long int A,B;
		scanf("%ld",&N);
		long int K;
		K=N;
		int rem,sum=0,c=0;
		while(N>0)
		{
			rem=N%10;
			if(rem==4)
			{
				sum=sum+pow(10,c);
				c++;
			}
			N=N/10;
		}
		A=sum;
		B=K-A;
		printf("Case #%d: %ld %ld",n,A,B);
		n++;
	}
}
