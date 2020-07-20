#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		int n;
		scanf("%d",&n);
		char p[2*n];
		scanf("%s",p);
		int l = strlen(p);
		printf("Case #%d: ",m);
		for (int i = 0; i < l; ++i)
		{
			if(p[i] == 'S'){
				printf("E");
			}
			else{
				printf("S");
			}
		}
		printf("\n");
	}
}