#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int b=1;b<=a;b++)
	{
		int x, y, z;
		scanf("%d", &z);
		for(int i=1;i<=z/2;i++)
		{
			int n, p=1;
			x=i;
			int l =x;
			y=z-i;
			int m = y;
			while(l)
			{
				n=l%10;
				if(n==4)
				{
					p=0;
         break ;
				}
        l=l/10;
			}
			while(m)
			{
				n=m%10;
				if(n==4)
				{
					p=0;
         break ;
				}
        m=m/10;
			}
			
			if(p==1)
			{
				printf("case #%d : %d %d \n",b, x, y);
        break;
			}
		}
	}
return 0;
}