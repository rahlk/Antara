#include<stdio.h>
#include<math.h>
int findab(int,int);
int reverse_no(int);
int count(int);
int main()
{
	int t,n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		findab(i,n);
	}
	return 0;
}
findab(int T,int num)
{
	int a,b=0,clen,len,r;
	a=num;
	len=count(num);
	while(num!=0)
	{
		r=num%10;
		if(r!=4)
		{
			num=num/10;
			continue;
		}
		else
		{
			clen=count(num);
			b=b+2*pow(10,len-clen);
			num=num/10;
		}	
	}
	a=a-b;
	printf("Case #%d: %d %d\n",T,a,b);
	return 0;
	
}
int reverse_no(int numb)
{
	int r,z=0;
	while(numb!=0)
	{
		r=numb%10;     //r to keep the remainder(last digit)
		z=z*10+r;	  //z to calculate reverse
		numb=numb/10;
	}
	return z;
}
int count(int n2)
{
	int i=0;
	while(n2!=0)
	{
		i=i+1;
		n2=n2/10;
	}
	return i;
}

