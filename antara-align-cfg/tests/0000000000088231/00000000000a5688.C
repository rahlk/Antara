#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		char n[101];
		scanf("%s",n);
		char a[101];
		char b[101];
		int l = strlen(n);
		for (int i = 0; i < l; ++i)
		{
			a[i] = b[i] = n[i];
		}
		for (int i = 0; i < l; ++i)
		{
			if(n[i] == '4'){
				b[i] = '2';
				a[i] = '2';
			}
			else{
				a[i] = '0';
				b[i] = n[i];
			}
		}
		printf("Case #%d: ",m);
		for (int i = 0; i < l; ++i)
		{
			printf("%c",a[i]);
		}
		printf(" ");
		for (int i = 0; i < l; ++i)
		{
			printf("%c",b[i]);
		}
		printf("\n");
	}
}