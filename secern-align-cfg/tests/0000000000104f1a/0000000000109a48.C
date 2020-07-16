#include <stdio.h>
#include <stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		int n,m;
		scanf("%d%d",n,m);
		int g = m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 18; ++j)
			{
				printf("18 ");
			}
		    fflush(stdout);
			int out[18];
			int g_temp = 0;
			for (int J = 0; J < 18; ++J)
			{
				scanf("%d",&out[J]);
				if(out[J] == -1){
					exit(-1);
				}
				g_temp+= out[J];
			}
			if(g>g_temp){
				g = g_temp;
			}
		}
		printf("%d",g);
		fflush(stdout);
		int ret;
		scanf("%d",&ret);
		if(ret != 1){
			exit(-1);
		}
	}
}