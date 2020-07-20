#include <stdio.h>
#include <stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		int p,q;
		scanf("%d%d",&p,&q);
		int x[q+1];
		int y[q+1];
		for (int i = 0; i < q+1; ++i)
		{
			x[i] = y[i] = 0;
		}
		int a = 0;
		int b = 0;
		char d[2];
		for (int i = 0; i < p; ++i)
		{
			scanf("%d%d",&a,&b);
			scanf("%s",d);
			if(d[0]=='N'){
				for (int j = b+1; j < q+1; ++j)
				{
					y[j]++;
				}
			}
			else if(d[0] == 'S'){
				for (int j = 0; j < b; ++j)
				{
					y[j]++;
				}
			}
			else if(d[0] == 'E'){
				for (int j = a+1; j < q+1; ++j)
				{
					x[j]++;
				}
			}
			else if(d[0] == 'W'){
				for (int j = 0; j < a; ++j)
				{
					x[j]++;
				}
			}
		}
		int l_x,l_y;
		l_x = l_y = 0;
		for (int i = 0; i < q+1; ++i)
		{
			if(x[l_x] < x[i]){
				l_x = i;
			}
			if(y[l_y] < y[i]){
				l_y = i;
			}
		}
		printf("Case #%d: %d %d\n",m,l_x,l_y);
	}
}