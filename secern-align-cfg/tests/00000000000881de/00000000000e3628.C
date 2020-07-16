#include <stdio.h>

typedef struct {
	int count;
	int start;
	int end;
} broken_t;

#define MAXB 16

#define MAXN 1024

//#define debug 

#if 1
int renew_broken(int b, char *resp, int n, int m, broken_t *broken)
{
	int i, j, jr, nm = 0;
	int len, len1, len0, j1, j0, nb;
	broken_t nbroken[MAXB];

	for (i = 0, j = 0, jr = 0; i < m; i++) {
		len = broken[i].end - broken[i].start;
		jr += broken[i].start - j;
		j = broken[i].start;
		if (len == broken[i].count) {
			j += len;
			nbroken[nm] = broken[i];
			nm++;
			continue;
		}
		len1 = len / 2;
		len0 = len - len / 2;
		for (j1 = 0; j1 < len1 && resp[jr] == '1'; j1++)
			jr++;
		for (j0 = 0; j0 < len0 && resp[jr] == '0'; j0++)
			jr++;
		if (len1 - j1) {
			nbroken[nm].count = len1 - j1;
			nbroken[nm].start = broken[i].start;
			nbroken[nm].end = broken[i].start + len1;
			nm++;
		}
		if (len0 - j0) {
			nbroken[nm].count = len0 - j0;
			nbroken[nm].start = broken[i].start + len1;
			nbroken[nm].end = broken[i].end;
			nm++;
		}
	}
	nb = 0;
	for (i = 0; i < nm; i++) {
		broken[i] = nbroken[i];
#ifdef debug
		printf("new broken %d : count=%d start=%d end=%d\n",
			i, broken[i].count, broken[i].start, broken[i].end);
		nb += broken[i].count;
#endif
	}
	//printf("b=%d nb=%d\n", b, nb);
	return nm;
}
#endif


void generate(int n, int m, broken_t *broken)
{
	int i, j;
	int len, halfmark;
	char out[MAXN + 1];

	for (i = 0, j = 0; i < m; i++) {
		len = broken[i].end - broken[i].start;
		halfmark = broken[i].start + len / 2;
#ifdef debug
		printf(" broken %d : count=%d start=%d end=%d len=%d half=%d\n",
			i, broken[i].count, broken[i].start, broken[i].end, len, halfmark);
#endif
		for (; j < broken[i].start; j++)
			out[j] = '.';
		for (; j < halfmark; j++)
			out[j] = '1';
		for (; j < broken[i].end;  j++)
			out[j] = '0';
	}
	for (; j < n;  j++)
		out[j] = '.';
	out[j] = '\0';
	printf("%s\n", out);
}

void print_broken(int m, broken_t *broken)
{
	int i, j, space = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < broken[i].count; j++) {
			if (!space)
				space = 1;
			else 
				printf(" ");
			printf("%d", broken[i].start + j);
		}
	}
	printf("\n");
}

int count_broken(int m, broken_t *broken)
{
	int i, cb = 0;
	for (i = 0; i < m; i++) {
		if (broken[i].count == broken[i].end - broken[i].start)
			cb += broken[i].count;
	}
	return cb;
}

void dobnf(int t)
{
	int n, b, f, m, cb;
	broken_t broken[MAXB];
	char resp[MAXN + 1];

	scanf("%d%d%d", &n, &b, &f);

	m = 1;
	broken[0].count = b;

	//broken[0].start = n/2;
	broken[0].end = n;

	broken[0].start = 0;
	//broken[0].end = n/2;

	cb = count_broken(m, broken);
	while (cb != b && f--) {
		generate(n, m, broken);
		scanf("%s", resp);
		m = renew_broken(b, resp, n, m, broken);
		cb = count_broken(m, broken);
	}
	print_broken(m, broken);
}

void main()
{
	int i, t;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		dobnf(i);
	}
}
