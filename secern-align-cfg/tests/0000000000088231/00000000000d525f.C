#include<stdio.h>
#include<math.h>
main()
{
	int cnt=0,n,a,b,dig=0,x=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(dig!=4)
				{
					dig=n%10;
					n=n/10;
					cnt++;
				}
			x=pow(10,cnt);
			a= n-(2*x);
			b=(2*x);
			printf("Break amount in %d , %d",a,b);
    
}
