#include <stdio.h>

void main()
{
	char nc;
	char A[100], B[100];
	int ABi, i;
	int T, Tcount = 0;
	scanf("%d",&T);
	getchar();
	while (T--)
	{
		ABi = 0;
		printf("Case #%d: ", ++Tcount);
		nc = getchar();
		//putchar(nc);
		while (nc >= '0' && nc <= '9')
		{
			if (nc == '4')
				A[ABi] = B[ABi] = '2';
			else
			{
				A[ABi] = nc;
				B[ABi] = '0';
			}
			ABi++;
			nc = getchar();
			//putchar(nc);
		}
		for (i = 0; i<ABi; i++)
			putchar(A[i]);
		putchar(' ');
		i = 0;
		while (B[i] == '0') i++;
		while (i<ABi)
			putchar(B[i++]);
		putchar('\n');
	}
}