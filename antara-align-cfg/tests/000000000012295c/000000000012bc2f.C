#include<stdio.h>
#include<string.h>


int main() {
	int T;
	scanf("%d", &T);

	for (int a = 1; a <= T; a++)
	{
		int p1 = 0, p2 = 0;
		int temp1 = 0, temp2 = 0;
		int pN = 0, qN = 0;
		char D = NULL;

		getchar();
		scanf("%d %d", &pN, &qN);
		int point1[100000] = { 0 };
		int point2[100000] = { 0 };
		for (int a = 0; a < pN; a++)
		{
			getchar();
			scanf("%d %d %c", &p1, &p2, &D);
			if (D == 'N' )
					point2[p2+1]++;
			if (D == 'E')
					point1[p1+1]++;
			if (D == 'W')
					point1[p1-1]++;	
			if (D == 'S')
					point2[p2-1]++;
		}
		for (int i = 0; i < 100000; i++)
		{
			if (point1[i] > temp1)
				temp1 = i;
			if (point2[i] > temp2)
				temp2 = i;
		}
		if (temp1 > qN)
			temp1--;
		if (temp2 > qN)
			temp2--;
		printf("Case #%d: %d %d\n", a, temp1, temp2);
	}
	return 0;
}