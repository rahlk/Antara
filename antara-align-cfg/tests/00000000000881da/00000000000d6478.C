#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int main()
{
	int T, N,i,j;
	char *P;
	scanf("%d", &N);
	scanf("%d", &T);
	for (i = 0; i<T; i++)
	{
		P = (char *)malloc(sizeof(char)*(2*N - 1));
		j = 0;
		scanf("%s", P);
		while (P[j] != '\0')
		{
			if (P[j] == 'S')
				P[j] = 'E';
			else
				P[j] = 'S';
			j++;
		}
		printf("Case #%d:", i + 1);
		for (j = 0; P[j] !='\0'; j++)
		{
			printf("%c", P[j]);
		}
		printf("\n");
		free(P);
	}
	return 0;
}