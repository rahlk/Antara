#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
for(int k=1;k<=t;k++)
	{
	int n;
	scanf("%d",&n);
	int num=n;
	int ctr=0;
	while(num!=0)
	{
		num=num/10;
		ctr++;
	}
	
	int i=0;
	int b=0;
	int a=n;
	num=n;
	while(ctr!=0)
	{
		int r=num%10;
		if(r==4)
		{
			a=a-pow(10, i);
			b=b+pow(10, i);
			
		}
		num=num/10;
		i++;
		ctr--;
	}
	printf("#Case%d: %d %d",k,a,b);
	}
	
return 0;	
}	