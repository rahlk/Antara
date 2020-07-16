#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

	int N;
	scanf("%d",&N);
	int a,b;
    int d1,d2;

while(N!=0)
{
	for(a=1;a<=N;a++)
	{ 
		while(d1!=4)
		{
			
			d1=a%10;
			a=a/10;
			
		}
		for(b=1;b<=N;b++)
		{
			while(d2!=4)
			{
				
				d2=b%10;
				b=b/10;
				
				
			}
		}
		if(a+b==N)
			printf("%d %d",a,b);
	}
}


	return 0;
}

