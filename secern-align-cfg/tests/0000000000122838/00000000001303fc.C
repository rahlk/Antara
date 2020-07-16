#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int T, id, row, col, L, R;
	int N, K, **skill, i, maxC, maxD, count;
	scanf("%d", &T);
	for(id = 0; id < T; ++id)
	{
		maxC = 0, maxD = 0, count = 0;
		scanf("%d %d", &N, &K);
		skill = (int **)malloc(sizeof(int *)*2);
		for(i = 0; i < 2; ++i)
			skill[i] = (int *)malloc(N*sizeof(int));
		for(row = 0; row < 2; ++row)
			for(col = 0; col < N; ++col)
				scanf("%d", &skill[row][col]);
		for(L = 0; L < N; ++L)
			for(R = L; R < N; ++R)
			{
				maxC = maxD = 0;
				for(i = L; i <= R; ++i)
				{
					if(skill[0][i] > maxC)
						maxC = skill[0][i];
					if(skill[1][i] > maxD)
						maxD = skill[1][i];
				}
				if(abs(maxC - maxD) > K) continue;
					count++;
			}
		printf("Case #%d: %d\n", id+1, count);
		for(i = 0; i < 2; ++i)
			free(skill[i]);
		free(skill);
	}
	return 0;
}
