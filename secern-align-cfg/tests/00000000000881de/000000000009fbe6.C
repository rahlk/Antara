#include <stdio.h>
#include <stdlib.h>

struct chunk {int size, broken;};

#ifdef TESTING
char sent[1025], mask[1025];
int spoint, rpoint, ntrials;
#endif

void xputchar(char c)
{
	putchar(c);
#ifdef TESTING
	rpoint = -1;
	sent[spoint++] = c;
#endif
}

int xgetchar(void)
{
#ifndef TESTING
	return getchar();
#else
	if (spoint) ++ntrials;
	spoint = 0;
	while (mask[++rpoint]) {}
	return putchar(sent[rpoint]);
#endif
}

/*inline*/ void putnchars(int n, char c)
{
	for (int i = 0; i != n; i++) xputchar(c);
}

/*inline*/ void addchunk(struct chunk **p, int s, int b)
{
	if (s == 0) return;
	if (!b && !((*p)[-1].broken))
		(*p)[-1].size += s;
	else
	{
		(*p)->size = s;
		(*p)->broken = b;
		++*p;
	}
}

void errex(const char *s)
{
	fputs(s, stderr);
	exit(1);
}

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu%*c", &no_cases);
	for (case_no = 0; case_no != no_cases; case_no++)
	{
		int n, b, f, count, s;
		char c, clook;
		struct chunk xprev[32], xnext[32], *pend, *nend, *ppt,
		 *prev = xprev + 1, *next = xnext + 1;
		xprev->size = xprev->broken = 1; *xnext = *xprev;
		nend = next;
		scanf("%i%i%i%*c", &n, &b, &f);
		if (b > 15) errex("b > 15");
#ifdef TESTING
		ntrials = 0;
		for (int i = 0; i <= n; i++) mask[i] = 0;
		printf("Broken places: ");
		for (int i = 0; i != b; i++)
		{
			int p;
			scanf("%i", &p);
			mask[p] = 1;
		}
		while (getchar() != '\n') {}
#endif
		
		if (n > 16)
		{
			for (int i = 0; i != n; i++) xputchar(i >> 4 & 1 | '0');
			int pleft = (n - 1 >> 4) + 1;
			xputchar('\n');
			fflush(stdout);
			count = 0;
			clook = '0';
			pend = prev;
			while (1)
			{
				c = xgetchar();
				if (c == clook) ++count;
				else
				{
					s = (pleft-- ? 16 :
					 (n - 1 & 15) + 1);
					count = s - count;
					addchunk(&pend, s, count);
					clook = c;
					count = 1;
					if (c == '\n') break;
				}
			}
			if (pleft)
			{
				if (pleft != 1) errex("pleft off");
				s = (n - 1 & 15) + 1;
				addchunk(&pend, s, s);
			}
		}
		else
		{
			prev->size = n;
			prev->broken = b;
			pend = prev + 1;
		}
#ifdef TESTING
		fputs("Passed first", stderr);
#endif
		
		while (1)
		{
#ifdef TESTING
			for (ppt = prev; ppt != pend; ppt++)
				fprintf(stderr, "[%i:%i] ", ppt->size,
				 ppt->broken);
			puts("/");
#endif			
			for (ppt = prev; ppt != pend; ppt++)
			{
				if (ppt->broken && ppt->size > 1)
					goto carry_on;
			}
			break;
			carry_on:
			for (ppt = prev; ppt != pend; ppt++)
			{
				if (ppt->broken && ppt->size > 1)
				{
					putnchars(ppt->size >> 1, '0');
					putnchars(ppt->size + 1 >> 1, '1');
				}
				else
					putnchars(ppt->size, '0');
			}
			xputchar('\n');
			fflush(stdout);
			
			for (ppt = prev; ppt != pend; ppt++)
			{
				count = 0;
				for (int i = ppt->size - ppt->broken; i--; )
					count += xgetchar() == '0';
				if (ppt->broken && ppt->size > 1)
				{
					count = (ppt->size >> 1) - count;
					addchunk(&nend, ppt->size >> 1, count);
					addchunk(&nend, (ppt->size + 1) >> 1,
					 ppt->broken - count);
				}
				else
					addchunk(&nend, ppt->size, ppt->broken);
			}
			if (xgetchar() != '\n') errex("Line length");
			
			pend = nend;
			nend = prev;
			prev = next;
			next = nend; 
		}
		
		count = 0;
		c = 1;
		for (ppt = prev; ppt != pend; ppt++)
		{
			if (ppt->broken)
			{
				printf("%s%i", " " + c, count);
				c = 0;
			}
			count += ppt->size;
		}
		putchar('\n');
		
#ifndef TESTING
		scanf("%i%*c", &s);
		if (s == -1) return 0;
#else
		printf("(%i trials)\n", ntrials);
#endif
	}
	return 0;
}
