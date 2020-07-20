#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(int n)
{
	unsigned long long int i;
	for(i=n;i>0;i=i/10)
	if(i%10==4)
	return 0;
	return 1;
}
void main()
{
 unsigned long long int t,n,a,b,c=1;
 scanf("%d",&t);
 while(t--)
 {
 	scanf("%llud",&n);
 	a=1;b=n-a;
 	while(1)
 	{
 		if(check(a)&&check(b))
	 	{	printf("Case #%llu: %llu %llu\n",c++,a,b);
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
