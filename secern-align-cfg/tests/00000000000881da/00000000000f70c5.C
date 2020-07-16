#include<stdio.h>
#include<math.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{ int n;
		scanf("%d",&n);
		char str[2*n-1];
		scanf("%s",str);
		printf("Case #%d: ",i+1);

		for (int j = 0; j < 2*n-2; ++j)
		{
			if(str[j]=='S')
				printf("E");
			else
				printf("S");
		}
		printf("\n");
	}
	return 0;
}
