#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		find_len(int nbr)
{
		int len;

		len = 0;
		if (nbr < 0)
		{
			len = 1;
			nbr = nbr * -1;
		}
		while (nbr != 0)
		{
			nbr = nbr / 10;
			len++;
		}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int len;
	char *str;

	len = find_len(nbr);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	len --;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[0] = '-';
	}
	if (nbr == 0)
		str[0] = '0';

	while (nbr != 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
int		isValid(int final)
{
	char *str;
	int i;

	i = 0;
	str = ft_itoa(final);
	while (str[i] != '\0')
	{
		if (str[i] == '4')
			return (1);
		else
			i++;
	}
	return (0);
}

void	print_solution(int final, int caseNum)
{
	unsigned int x;
	unsigned int y;

	if (isValid(final) == 0)
		return;
	else if (final % 2 == 0)
	{
		x = final / 2;
		y = x;
	}
	else if (final % 2 != 0)
	{
		x = final - 1 / 2;
		y = x + 1;
	}
	while (isValid(x) == 1 || isValid(y) == 1)
	{
		x = x - 1;

		y = y + 1;
	}
	printf("Case #%i: %i %i",caseNum,x,y);
}

int		main()
{
	int t;
	int final;
	int caseNum;
	
	caseNum = 1;
	scanf("%i", &t);

	for (int i = 1; i <= t; ++i)
	{
		scanf("%i", &final);
		print_solution(final,caseNum);
		caseNum++;		
	}
	return (0);
}
