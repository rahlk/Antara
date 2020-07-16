#include <stdio.h>
#include <string.h>

unsigned int horizontal[16], vertical[16];
unsigned int zeroh, zerov;
unsigned char stored_value[65536];
int game_value(unsigned int y0,unsigned int y1,unsigned int x0,unsigned int x1)
{
	if (y0 == y1 || x0 == x1) return 0;
	unsigned int place = y0 << 12 | y1 << 8 | x0 << 4 | x1;
	if (stored_value[place]) return stored_value[place] - 1;
	unsigned char valmoves[32] = {};
	for (unsigned int y = y0; y != y1; y++)
		if (!((horizontal[y] & ((1U << x1) - 1)) >> x0))
			++valmoves[game_value(y0, y, x0, x1)
			         ^ game_value(y + 1, y1, x0, x1)];
	unsigned int szh = valmoves[0];
	for (unsigned int x = x0; x != x1; x++)
		if (!((vertical[x] & ((1U << y1) - 1)) >> y0))
			++valmoves[game_value(y0, y1, x0, x)
			         ^ game_value(y0, y1, x + 1, x1)];
	zeroh = szh; zerov = valmoves[0] - szh;
	for (unsigned int i = 0; i != 32; i++)
		if (!valmoves[i])
		{
#ifdef TESTING
			printf("%u %u  %u %u: %u\n", y0, y1, x0, x1, i);
#endif
			stored_value[place] = i + 1;
			return i;
		}
	return -1;
}

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu%*c", &no_cases);
	for (case_no = 0; case_no != no_cases; case_no++)
	{
		int R, C;
		scanf("%i%i", &R, &C); while (getchar() != '\n') {}
		for (int i = 0; i != 16; i++) horizontal[i] = vertical[i] = 0;
		for (int i = 0; i != R; i++)	
		{
			for (int j = 0; j != C; j++)
				if (getchar() == '#')
				{
					horizontal[i] |= 1 << j;
					vertical[j] |= 1 << i;
				}
			while (getchar() != '\n') {}
		}
		game_value(0, R, 0, C);
		printf("Case #%lu: %u\n", case_no + 1, zeroh * C + zerov * R);
		memset(stored_value, 0, 65536);
	}
	return 0;
}
