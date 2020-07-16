#include<stdio.h>
#include<stdlib.h>
void split(long int n,long int* a,long int* b)
{
	*a=0;
	*b=n;
	int count=1;
	while(n!=0)
	{
		if(n%10==4)
		{
			*a+=count;
			*b=*b-count;
			
		}
		count*=10;
		n=n/10;
			
			
	}

	
}
int main()
{
	int t;
	long int n;
	scanf("%d",&t);
	long int a,b;
	long int**res=(long int**)malloc(sizeof(long int*)*t);
	for(int i=0;i<t;i++)
	{
		res[i]=(long int*)malloc(sizeof(long int)*2);
		scanf("%ld",&n);
		split(n,&a,&b);
		res[i][0]=a;
		res[i][1]=b;
	}
	for(int i=0;i<t;i++)
	{
		printf("Case #%d: %ld %ld\n",i+1,res[i][0],res[i][1]);
	}
}