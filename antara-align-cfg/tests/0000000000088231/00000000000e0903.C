#include <stdio.h>
#include<math.h>
int count(int a)
{
	int coun = 0;
	while(a!= 0)
	{
		coun++;
		a = a/10;
	}
	return coun;
}
void fill(int s, int num[], int n)
{
	int c = s-1;
	while(n!=0)
	{
		num[c]=n%10;
		n = n/10;
		c--;
	}
}
int power(int a)
{
	int c=1;
	while(a!=0)
	{
		c = c*10;
		a--;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int p;
		scanf("%d",&p);
		int s = count(p);
		int num[s];
		fill(s,num,p);
		int num1=0;
		int num2=0;
		for(int j=0;j<s;j++)
		{
			if(num[j]==4)
			{
				
				num1 = (num1) + 2*power(s-j-1);
				
				num2 = (num2) + 2*power(s-j-1);
			}
			else
			{
				
				num1 = num1 + ((num[j])*power(s-j-1));
				
				//num2 = num2*10;
			}
		}
		printf("Case #%d: %d %d\n",i+1, num1, num2);

	}
}