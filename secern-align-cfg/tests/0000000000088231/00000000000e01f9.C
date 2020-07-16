#include<stdio.h>
#include<stdio.h>
int Divide(int j,int  n)
{   
    int m=0,t=0,k=n,a[9];
    for(int i=0;i<9;i++)
    {
    	a[i]=0;
	}
	for(int i=0;i<9&&k!=0;i++)
	{
	    
	    t=k%10;
	    k=k/10;
		if(t==4)
		a[8-i]=1;	
		
	}
	for(int i=0;i<9;i++)
	{ 
		m=m*10+a[i];
	}
	printf("Case #%d:%d %d\n",j,n-m,m);
	return 0;
}

int main()
{
	int i,T;
	scanf("%d",&T);
	long int b[100];
	for(i=1;i<=T;i++)
	{
		scanf("%d",&b[i]);
		
	}
	for(i=1;i<=T;i++)
	{
		Divide(i,b[i]);
		
	}
	return 0;
	
}
