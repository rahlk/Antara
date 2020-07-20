#include<stdio.h>
#include<string.h>


int main() {
	int T;
	int pN=0, qN=0;

	scanf("%d", &T);

	for (int a = 1; a <= T; a++)
	{
		int c1 = 0, c2 = 0;
		int p1 = 0, p2 = 0;
		int temp1 = 0, temp2 = 0;
		char D = NULL;

		getchar();
		scanf("%d %d", &pN, &qN);
		int point1[100000] = { 0 };
		int point2[100000] = { 0 };
		for (int a = 0; a < pN; a++)
		{
			getchar();
			scanf("%d %d %c", &p1, &p2, &D);
			if (D == 'N' && p2 >= c2)
			{
				c2 = p2 + 1;
				for (int j = 1; j < qN; j++)
				{
					if (j == c2)
						point2[j]++;
				}
			}
			if (D == 'E' && p1 >= c1)
			{
				c1 = p1 + 1;
				for (int j = 1; j < qN; j++)
				{
					if (j == c1)
						point1[j]++;
				}
			}
			if (D == 'W' && p1 <= c1)
			{
				c1 = p1 - 1;
				for (int j = 1; j < qN; j++)
				{
					if (j == c1)
						point1[j]++;
				}
			}
			if (D == 'S' && p2 <= c2)
			{
				c2 = p2 - 1;
				for (int j = 1; j < qN; j++)
				{
					if (j == c2)
						point2[j]++;
				}
			}
		}
		c1 = 0; c2 = 0;
		for (int i = 1; i < qN; i++)
		{
			if (point1[i] > temp1)
				temp1=i;
			if (point2[i] > temp2)
				temp2=i;
		}
		printf("Case #%d: %d %d\n", a, temp1, temp2);
	}
	return 0;
}