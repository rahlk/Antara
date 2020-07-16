#include <stdio.h>

int four(int x)
{
	while(x!=0)
	{
	if(x%10!=4)
		x=x/10;
	continue;
	
}
	return 0;
}
int foregon(int X)
{
	int a,b;
	while(X!=0)
	{
	for(a=1;a<=X;a++)
	{
		if(four(a)==0)
			continue;
	}
	for(b=1;b<=X;b++)
	{
		if(four(b)==0)
			continue;
	}
	if(a+b==X)
		printf("%d%d",a,b);
		return 0;
	}
		
}
int main(int argc, char *argv[]) {
	int N;
	scanf("\n%d",&N);
	foregon(N);
	
	
	return 0;
}
