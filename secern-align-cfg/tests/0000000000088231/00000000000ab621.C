#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	int n=1;
	while(T--){
		long int N;
		long int A,B;
		scanf("%ld",&N);
		long int K;
		K=N;
		int pos=0;
		int rem,sum=0,c=0;
		while(N>0)
		{
			rem=N%10;
			if(rem==4)
			{
				c++;
				sum=sum+pow(10,pos);
			}
			N=N/10;
			pos++;
		}
		A=sum;
		B=K-A;
		printf("Case #%d: %ld %ld",n,A,B);
		n++;
	}
}
