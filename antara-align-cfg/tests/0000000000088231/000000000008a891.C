#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(int n)
{
	long int i;
	for(i=n;i>0;i=i/10)
	if(i%10==4)
	return 0;
	return 1;
}
void main()
{
 long int t,n,a,b,c=1;
 scanf("%d",&t);
 while(t--)
 {
 	scanf("%d",&n);
 	a=1;b=n-a;
 	while(1)
 	{
 		if(a&&b)
	 	{	printf("Case #%d: %d %d\n",c++,a,b);
	 		break;
 		}
 		else
 		{
 			a++;
 			b=n-a;
		} 		
	}	
 } 
}
