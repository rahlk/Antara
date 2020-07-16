#include<stdio.h>
void main()
{int n,d,c=1;

printf("enter a no");
scanf("%d",&n);
int i,p=n;
while(c!=0)
{

	n=n/2;
	c=0;
	for(i=n;i>0;i=i/10)
	{
		d=i%10;
		if(d==4)
		{c++;break;
		}
	}}
	printf("%d\n",n);
	int g=p-n;
	printf("%d",g);
}
