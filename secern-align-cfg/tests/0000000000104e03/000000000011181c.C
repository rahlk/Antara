#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int  T = 0;
	int R, C,Rp,Cp;
	char temp[10],RC[10],CC[10];
	char delim[] = " ";
	scanf("%d", &T);
	for (int a = 1; a <= T; a++)
	{
		R = 0; C = 0; Rp = 1; Cp = 1;
		for (int b = 0; b < 10; b++)
		{
			temp[b] = NULL;
			RC[b] = NULL;
			CC[b] = NULL;
		}

		getchar();
		scanf("%[^\n]s", temp);

		int c = 0;
		for (; c < 10; c++)
		{
			if (temp[c] == ' ')
				break;
			RC[c] = temp[c];
		}
		for (int d = 0; c < 10; d++, c++)
		{
			CC[d] = temp[c];
		}

		R = atoi(RC);
		C = atoi(CC);

		if (R * C<10)
			printf("Case #%d: IMPOSSIBLE\n", a);
		else
		{
			printf("Case #%d: POSSIBLE\n", a);
			for (int e = 0; e < R*C; e++) {
				if (Rp == R + 1)
					Rp = 1;
				if (Rp == R + 2)
					Rp = 2;
				if (Rp == R + 3)
					Rp = 3;					
				if (Cp == C + 1)
					Cp = 1;
				if (Cp == C + 2)
					Cp = 2;
				printf("%d %d\n", Rp, Cp);
				Rp+=3;
				Cp+=2;
			}
		}
	}
	

		return 0;
	}
	