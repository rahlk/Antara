#include<stdio.h>

int* calculate(long n,long *res)
{
	long num=n,res1=0,res2=0,fact=1;
	while(num>0)
	{
		if(num%10==4)
		{
			res1=3*fact+res1;
			res2=1*fact+res2;
		}
		else
		{
			res1=(num%10)*fact+res1;
		}
		fact=fact*10;
		num/=10;
	}
	res[0]=res1; res[1]=res2;
	return res; 
}

void main()
{
	int t;
	long res[2];
	scanf("%d",&t);
	long ar[t];
	for(int i=0;i<t;i++)
	{
		scanf("%ld",&ar[i]);
	}
    long *resa;
	for(int i=1;i<=t;i++)
	{
		resa=calculate(ar[i-1],res);
		printf("Case #%d: ",i);
		printf("%d %d\n",resa[0],resa[1]);
	}
}

