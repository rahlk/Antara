#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int T,i,A,B,N;
	long int rem,mod;
	setbuf(stdout,NULL);	
	scanf("%ld",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%ld",&N);
		A=0;
		B=0;
		mod =10;
		while(N)
		{
			rem=N%mod;
			if(rem==4*mod/10)
			{
				A+=rem/2;
				B+=rem/2;
			}
			else
				A+=rem;
			mod=mod*10;
			N-=rem;
		}
		printf("Case #%ld: %ld %ld\n",i,A,B);
	}
	return 0;
}
