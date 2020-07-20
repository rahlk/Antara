#include <stdio.h>

int main()
{
	int T, N[100],R1=0,R2=0,temp,P=1;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N[i]);
	}
	for (int i = 0; i < T; i++)
	{
		R1 = 0;
		R2 = 0;
		P = 1;

		

		while (N[i] > 0)
		{
			temp = N[i] % 10;
			if (temp == 4)
			{
				R1 = R1  + (1*P);
				R2 = R2  + (3*P);
				P = P * 10;
			}
			else
			{
				R1 = R1  + (0*P);
				R2 = R2  + (temp*P);
				P = P * 10;
			}
			N[i] = N[i] / 10;
		}
		printf("case #%d: %d %d\n", i + 1, R1, R2);
	}
}