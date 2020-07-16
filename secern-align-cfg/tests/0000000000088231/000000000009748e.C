#include<stdio.h>
#include<conio.h>
int check(int x)
{
while(x!=0)
{
	if(x%10==4)
		return 0;
	else
		x=x/10;
}
return 1;
}

void main()
{
clrscr();
int t,n,a,b,i,m,o;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d",&n);
	for(a=1;a<=n/2;a++)
	{
		if(check(a))
	{
		b=n-a;
		if(check(b))
		{
			 m=a;
			 o=b;
		}
	}
}
printf("test case #%d: %d %d\n",i,m,o);
}

}