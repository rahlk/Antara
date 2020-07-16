#include<stdio.h>
#include<math.h>
int main()
{
        int t;

        scanf("%d",&t);

		int i=1;

		while(t!=0)
		{
			int n;

			
			scanf("%d",&n);
			
			int b = n/4;
			
            printf("Case #%d: %d %d",i,b,(n-b));
            printf("\n");

               
        }
}
