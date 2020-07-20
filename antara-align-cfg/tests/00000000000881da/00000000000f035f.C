#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
		int N;
		scanf("%d",&N);
		
		printf("Case #%d: ", i + 1);
	
		char x;
		for(int j=0;j<2*N-2;j++)
		{
			scanf(" %c",&x);
			if(x=='S')
				printf("E");
			else
				printf("S");
		}
		printf("\n");
	}
	
return 0;
}
