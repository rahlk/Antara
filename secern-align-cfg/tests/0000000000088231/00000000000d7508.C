#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int digtest(int x)
{
	int t;
	while(x!=0)
	{
		t=x%10;
		x=x/10;
		if(t==4)
		return 1;
	}
	return 0;
}
int divdig(int x)
{
	int s;
	while(x!=0)
	{
		s=x/2;
		if(!digtest(s))
			return s;
		x=x/2;
		
	}
	return 1;
}
int main()
{
	int test,i;
	scanf("%d",&test);
	int arrin[test],arrfinal[2*test];
	for(i=0;i<test;i++)
	{
		scanf("%d",&arrin[i]);
		arrfinal[2*i]=divdig(arrin[i]);
		arrfinal[2*i+1]=arrin[i]-arrfinal[2*i];
		while(digtest(arrfinal[2*i]) || digtest(arrfinal[2*i+1]))
		{
			if(digtest(arrfinal[2*i]))
			{
				arrfinal[2*i]=divdig(arrfinal[2*i]);
				arrfinal[2*i+1]=arrin[i]-arrfinal[2*i];
			}
			else
			{
				arrfinal[2*i+1]=divdig(arrfinal[2*i+1]);
				arrfinal[2*i]=arrin[i]-arrfinal[2*i+1];
			}
		}
	}
	for(i=0;i<test;i++)
	{
		printf("case #%d: ",i+1);
		printf("%d %d\n",arrfinal[2*i],arrfinal[2*i+1]);
	}
	return 0;
}
