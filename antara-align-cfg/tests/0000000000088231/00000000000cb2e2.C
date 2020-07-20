#include<stdio.h>


int check4(int a)
{	
	int n = a,t,f=0;
	while(n>0)
	{
		t=n%10;
		if(t==4)
		{	
			f=1;
			break;
		}
		n=n/10;
	}	
//	printf("%d",f);
	return f;
	
	
}
int main()

{
	long int a,t,i;
	int f,n;
	
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		i=1;	
		scanf("%ld",&a);
		f=check4(a);
		while(i<a)
		{	
			f=check4(i);
			if(f==1)
			{i++;	continue; }
			t=a-i;
			f=check4(t);
			if(f==0)
				break;
			//printf("%d %d\n",i,t);	
			i++;
		}
		printf("Case #%d: %ld %ld\n",j,i,t);		
	}
	return 0;
}