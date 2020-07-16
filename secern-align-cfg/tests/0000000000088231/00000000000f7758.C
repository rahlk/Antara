#include <stdio.h>

int four(int x)
{
	while(x!=0)
	{
	if(x%10!=4)
		x=x/10;
	
	
}
	return 1;
}
int foregon(int X)
{
	int a,b;
	while(X>0)
	{
	for(a=1;a<=X;a++)
	{
		
	
	for(b=1;b<=X;b++)
	{
		if(four(a)!=1&&four(b)!=1)
			break;
		else {
			
		if(a+b==X)
	
	
		printf("%d%d",a,b);
		
	}
	}
	}
}
	return 1;
}
int main(int argc, char *argv[]) {
	int N;
	scanf("\n%d",&N);
	int v=foregon(N);
	
	
	return v;
}
