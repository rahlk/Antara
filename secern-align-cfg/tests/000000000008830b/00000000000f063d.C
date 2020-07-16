#include <stdio.h>
#include <stdlib.h>

long long mcd( long long a, long long b){
    long long r = 0;
    while (b>0){
        r = b;
        b = a % b;
        a = r;
    }
    return a;
}

int append( long long *a, int n, long long v)
{
    int j;
    for (j=0;j<n;j++) if (v==a[j]) return n;
    a[j] = v;
    return n+1;
}

int compare(const void *_a, const void *_b) {
        long long *a, *b;
        a = (long long *) _a;
        b = (long long *) _b;
        return (*a - *b);
}

int process(int iter)
{
    int n, l;
    int i, j;
    long long v[128], r[128], p[26];
    scanf("%d %d", &n, &l);

    for (i=0; i<l;i++)
        scanf("%lld", &v[i]);

    r[1] = mcd(v[0], v[1]);
    r[0] = v[0] / r[1];
    for (i=1; i<=l; i++)
        r[i] = v[i-1] / r[i-1];

    int plen=0;
    for (i=0; i<=l; i++)
        plen = append(p, plen, r[i]);
    qsort(p, 26, sizeof(long long), &compare);

    printf("Case #%d: ", iter);
    for (i=0; i<=l; i++)
    {
        j=0;
        while (r[i]!=p[j]) j++;
        putchar('A'+j);
    }
    putchar('\n');

    return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		process(i);
	return 0;
}