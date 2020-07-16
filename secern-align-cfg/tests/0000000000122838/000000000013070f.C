#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define MAX 100000

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = (void *)malloc(sizeof(char) * size)))
		return (0x0);
	while (size--)
		((unsigned char *)mem)[size] = 0;
	return (mem);
}

long		getResult(int *lina, int *rayan, int space)
{
	long res = 0;

	for (int i = 1; i < MAX; i++) {
		for (int j = 0; j <= space ; j++) {
			res += lina[i] * rayan[i + j];
		}
	}

	return (res);
}


int		addbattle(int *lina, int sword)
{
	int val;

	for (int i = 0; i < sword - 1; i++) {
		scanf("%d ", &val);
		lina[val]++;
	}
	scanf("%d", &val);
	lina[val]++;
	return (1);
}

int main(int ac, char **av)
{
    int nbTour = -1;
    scanf("%d", &nbTour);
    int *lina = NULL;
	int *rayan = NULL;
	int sizeMax = -1;
	int sizemap;
	long res;
	char c;
	int nbSword;
	int space;

	lina = ft_memalloc(sizeof(int) * (MAX + 2));
	rayan = ft_memalloc(sizeof(int) * (MAX + 2));
    for (int i = 0; i < nbTour; i++)
    {
        scanf("%d %d", &nbSword, &space);
		addbattle(lina, nbSword);
		addbattle(rayan, nbSword);
		res = getResult(lina, rayan, space);
       printf("Case #%d: %ld\n", i+1, res);
       bzero(lina, MAX * sizeof(int));
       bzero(rayan, MAX * sizeof(int));
    }
	free(lina);
	free(rayan);
    return (0);
}
