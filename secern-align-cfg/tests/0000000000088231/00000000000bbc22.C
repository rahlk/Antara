#include<stdio.h>
#include<math.h>
int main()
{
        int t;

        printf("enter the test:");
        scanf("%d",&t);

		int i=1;

		while(t!=0)
		{
			int n;

			printf("enter the number:");
			scanf("%d",&n);

			int x,y=n;
			int b=0,h;
			int j=0;

			while(n!=0)
			{
				x = n%10;
				if(x == 4)
				{
				    h = pow(10,j);
					b = b + h;
					j++;
				}

				else
					j++;

				n = n/10;

			}

			printf("Case #%d: %d %d",i,b,(y-b));
			printf("\n");

			i++;
			t--;
		}
}
