/*Foregone Solution*/

#include<stdio.h>
#include<string.h>

int main()
{
	char N[105], num1[105], num2[105];
	int i, length, t, T;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%s", N);
		length = strlen(N);
		printf("Case #%d: ", t);
		for (i = 0; i < length; i++)
		{
			if (N[i] == '4')
			{
				num1[i] = '3';
				num2[i] = '1';
			}
			else
			{
				num1[i] = '0';
				num2[i] = N[i];
			}
		}
		num1[length] = num2[length] = '\0';
		i = 0;
		while ((i < length) && (num1[i] == '0'))
			i++;
		printf("%s ", num1 + i);
		printf("%s\n", num2);
	}
	return 0;
}