#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	int n=1;
	while(T--){
		int N,A,B;
		scanf("%d",&N);
		int K;
		K=N;
		int pos=0,sum=0,rem,c=0;
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
		A=K-sum;
		B=sum;
		printf("Case #%d: %d %d\n",n,A,B);
		n++;
	}
}
