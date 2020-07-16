#include <stdio.h>

int main()
{
	char N[1000];
	char B[1000];
	int x, T;
	scanf("%d", &T);
	for(x=1; x<=T; x++)
	{
		scanf("%s", N);
		int i, j=-1;
		for(i=0; N[i]!=0; i++)
		{
			if(N[i]=='4'){
				N[i] = '3';
				B[i] = '1';
				if(j<0) j=i;
			} else B[i] = '0';
		}
		B[i] = 0;
		printf("Case #%d: %s %s\n", x, N, &B[j]);
	}
	return 0;
}
