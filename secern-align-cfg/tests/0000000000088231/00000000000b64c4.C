#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long int i, n, size, temp,dig, count,sol1, sol2;
	int t,j;
	int a[100];
	scanf("%d", &t);
	if(t>=1 && t<=100)
	{
		for(j=1; j<=t ; j++)
		{
			scanf("%ld", &n);
			count = 0;
			temp = n;
			if(n>1 && n<pow(10,100))
			{
				i =0;
				while(temp !=0 )
				{
					dig = temp%10;
					a[i] = dig;
					i++;
					if(dig == 4) count++;
					temp = temp/10;	
				}// while
				size = i;
				if(count ==0)
					exit(100);
				sol1 = 0; sol2 = 0;
				for(i=size-1; i>=0; i--)
				{
					if(a[i] == 4)
					{
						sol1 = sol1 *10 + 3;
						sol2 = sol2*10 + 1;
					}

					else{
						sol1 = sol1*10 + a[i];
						sol2 = sol2*10;
					}
				}
			}//if of n
			printf("Case #%d: ", j);
			printf("%ld %ld\n", sol1, sol2);
		}// for t
	}// if of t
	return 0;
}