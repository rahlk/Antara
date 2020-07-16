#include<stdio.h>

int checkd(int i,int j)
{
	int m;
	int ch=0;
	while(i>0)
	{
		m=i%10;
		if(m==4)
		ch=1;
		i=i/10;
	}
	while(j>0)
	{
		m=j%10;
		if(m==4)
		ch=1;
		j=j/10;
	}
	
	return ch;
}

void fun(int a)
{
	int i,j,k;
	k=1;
	i=a/2;
	j=i;
	while(k!=0)
	{
		if(i+j==a)
		{
			k=checkd(i,j);
			if(k==0)
			{
			printf("%d %d\n",i,j);
			return;
			}
	}
	k=1;
	i++;
	j--;
	}
}

int main()
{
	int n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		int a;
		scanf("%d",&a);
		fun(a);
		i++;
	}
}