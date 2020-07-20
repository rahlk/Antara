#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
//#include "libft/includes/libft.h"
#define UP 10
#define DOWN 11
#define LEFT 12
#define RIGHT 13

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = (void *)malloc(sizeof(char) * size)))
		return (0x0);
	while (size--)
		((unsigned char *)mem)[size] = 0;
	return (mem);
}



int addpersonn(int x, int y, int direction, int *line, int *column, int size)
{
	int *tmp;
	int min = 0;
	int max = size;
	if (direction == RIGHT)
	{
		tmp = column;
		min = x + 1;
		max = size;
	}
	else if (direction == LEFT)
	{
		tmp = column;
		min = 0;
		max = x;
	}
	else if (direction == UP)
	{
		tmp = line;
		min = y + 1;
		max = size;
	}
	else if (direction == DOWN)
	{
		tmp = line;
		min = 0;
		max = y;
	}
	else
		return (printf("probleme dans addpersonn %d\n", direction));
	for (; min < max; min++)
		tmp[min]++;
	return (1);
}

int		bestPosition(int *line, int *column, int size)
{
	int x = 0;
	int y = 0;
	int valuelx = line[x];
	int valuely = line[y];

	for (int i = 1; i < size ; i++) {
		if (valuelx < column[i])
		{
			valuelx = column[i];
			x = i;
		}
	}
	for (int i = 1; i < size ; i++) {
		if (valuely < line[i])
		{
			valuely = line[i];
			y = i;
		}
	}
	printf("%d %d\n", x, y);
	return (1);
}

int main(int ac, char **av)
{
    int nbTour = -1;
    scanf("%d", &nbTour);
    int *line = NULL;
	int *column = NULL;
	int sizeMax = -1;
	int nbPersonn;
	int sizemap;
	int x,y;
	char c;
	
	line =   ft_memalloc(sizeof(int) * (12));
	column = ft_memalloc(sizeof(int) * (12));
    
    for (int i = 0; i < nbTour; i++)
    {
        scanf("%d %d", &nbPersonn, &sizemap);
	    for (int j = 0; j < nbPersonn; j++) {
        	scanf("%d %d %c", &x, &y, &c);
			if (c == 'N')
				addpersonn(x,y,UP, line,column, sizemap+1);
			else if (c == 'E')
				addpersonn(x,y,RIGHT, line,column, sizemap+1);
			else if (c == 'S')
				addpersonn(x,y,DOWN, line,column, sizemap+1);
			else if (c == 'W')
				addpersonn(x,y,LEFT, line,column, sizemap+1);
			else
				printf("probleme %c \n", c);
		}

       printf("Case #%d: ", i+1);
	   bestPosition(line, column, sizemap+1);
	  /*// free(line);
	   //free(column);
	   line = NULL;
	   column = NULL;
       */
        bzero(column, 11 * sizeof(int));
        bzero(line, sizeof(int) * 11);
    }
    return (0);
}
