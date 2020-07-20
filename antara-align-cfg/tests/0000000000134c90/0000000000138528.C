#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu%*c", &no_cases);
	for (case_no = 0; case_no != no_cases; case_no++)
	{
		int A; scanf("%i", &A); while (getchar() != '\n') {}
		char seqs[524288]; int cpos[255], *cpos_end = cpos;
		char moves[512], *moves_end = moves;
		for (int n = 0; n != A; n++)
		{
			char *p = seqs + (n << 9);
			while (1) switch (getchar())
			{
				case 'R': *p++ = 0; break;
				case 'P': *p++ = 1; break;
				case 'S': *p++ = 2; break;
				case '\r': break;
				default: return 1;
				case '\n': *p = 4; goto done0;
			}
			done0: *cpos_end++ = n << 9;
		}
		
		while (1)
		{
			int count[3] = {};
			for (int *i = cpos; i != cpos_end; i++)
				++count[seqs[*i]];
			int q = !!count[1] + !!count[2] * 2;
			switch (!!count[0] + !!count[1] + !!count[2])
			{
				case 3: goto impossible;
				case 1: *moves_end++ = "PSR"[q]; goto done;
				case 2: *moves_end++ = "RPS"[q=(5-q)%3]; break;
				default: return 1;
			}
			int *crp = cpos;
			for (int *i = cpos; i != cpos_end; i++)
				if (seqs[*i] == q)
				{
					int n = *i + 1;
					if (seqs[n] == 4) n &= ~511;  
					*crp++ = n;
				}
			cpos_end = crp;
		}
		done: *moves_end = 0;
		printf("Case #%lu: %s\n", case_no + 1, moves); continue;
		impossible: printf("Case #%lu: IMPOSSIBLE\n", case_no + 1);
	}
	return 0;
}
