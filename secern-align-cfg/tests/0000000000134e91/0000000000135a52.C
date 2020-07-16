#include <stdio.h>

int main(int argc, char **argv)
{
	int T, F;
	scanf("%i%i", &T, &F);
	while (getchar() != '\n') {}
	while (T--)
	{
#ifndef TESTING
		int fpl[119], cnum = 120, curip = 1, x;
#else
		int fpl[119], cnum = 6, curip = 3, x;
#endif
		int arrangement[5] = {7};
		for (int i = 0; i != 119; i++) fpl[i] = i;
		
		while (1)
		{
			int nextnum = cnum / (6 - curip), result = -1;
			int count[5] = {};
			int nextp[5][24], nextpp[5] = {};
			for (int i = 0; i != cnum - 1; i++)
			{
				printf("%i\n", fpl[i] * 5 + curip);
				fflush(stdout);
				x = getchar() - 'A';
				while (getchar() != '\n') {}
				if (x < 0 || x >= 5) return 1;
				++count[x];
				if (nextpp[x] == nextnum) return 1;
				nextp[x][nextpp[x]++] = fpl[i];
			}
			if (curip == 4)
			{
				for (int k = 0; k != 5; k++)
				switch (count[k])
				{
					case 0: break;
					case 1: arrangement[4] = k;
					arrangement[3] = 10 - k - arrangement[0]
					 - arrangement[1] - arrangement[2];
					goto complete;
					default: return 1;
				}
				return 1;
			}
			for (int k = 0; k != 5; k++)
			{
				if (count[k] == 0 || count[k] == nextnum)
					continue;
				else if (count[k] == nextnum - 1) result = k;
				else return 1;
			}
			if (result == -1) return 1;
			arrangement[curip - 1] = result;
			for (int i = 0; i != nextnum - 1; i++)
				fpl[i] = nextp[result][i];
			cnum = nextnum;
			++curip;
		}
		complete:
		for (int i = 0; i != 5; i++)
			putchar(arrangement[i] + 'A');
		putchar('\n');
		if (getchar() != 'Y') return 0;
		while (getchar() != '\n') {}
	}
	return 0;
}
