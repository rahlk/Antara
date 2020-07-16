#include<stdio.h>
#include<stdlib.h>
unsigned long long powr(unsigned long long a,unsigned long long b)
{
	unsigned long long c=1;
	while(b--)
		c=c*a;
	return c;
}	
int main()
{
	unsigned long long bol,r1,r2,r3,r4,r5,r6,s61,s62,s63,s64,s65,s66,t,w,i,s6;
	scanf("%llu %llu",&t,&w);
	for(i=1;i<=t;i++)
	{
		printf("54");
		scanf("%llu",&s61);
		s62=s61%powr(2,54);
		r1=(s61-s62)/powr(2,54);
		s63=s62%powr(2,27);
		r2=(s62-s63)/powr(2,27);
		printf("200");
		scanf("%llu",&s64);
		s65=s64%powr(2,50);
		r4=(s64-s65)/powr(2,50);
		s66=s65%powr(2,40);
		r5=(s65-s66)/powr(2,40);
		r6=s66/powr(2,33);
		r3=(s61-powr(2,54)*r1-powr(2,27)*r2-powr(2,13)*r4-powr(2,10)*r5-powr(2,9)*r6)/powr(2,18);
		printf("%llu %llu %llu %llu %llu %llu",r1,r2,r3,r4,r5,r6);
		scanf("%llu",&bol);
		if(bol!=1)
			exit(0);
	}
}
